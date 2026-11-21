import serial
import time
import csv
import os

# --- CẤU HÌNH CỔNG KẾT NỐI ---
# Đổi 'COM3' thành đúng cổng COM ESP32 đang cắm (kiểm tra trong Arduino IDE hoặc Device Manager)
COM_PORT = 'COM3'  
BAUD_RATE = 115200
OUTPUT_FILE = 'fruit_dataset.csv'

# Định nghĩa các cột cho file CSV
HEADER = ['Sample_ID', 'F1_415', 'F2_445', 'F3_480', 'F4_515', 'F5_555', 
          'F6_590', 'F7_630', 'F8_680', 'Clear', 'NIR', 'Ground_Truth']

def init_csv():
    """Tạo file CSV và ghi tiêu đề nếu file chưa tồn tại."""
    if not os.path.exists(OUTPUT_FILE):
        with open(OUTPUT_FILE, mode='w', newline='') as file:
            writer = csv.writer(file)
            writer.writerow(HEADER)
        print(f"Đã tạo file mới: {OUTPUT_FILE}")

def main():
    init_csv()

    try:
        ser = serial.Serial(COM_PORT, BAUD_RATE, timeout=2)
        time.sleep(2)  # Đợi kết nối ổn định
        ser.reset_input_buffer()
        print(f"--- Đã kết nối với ESP32 qua {COM_PORT} ---")
    except Exception as e:
        print(f"Lỗi kết nối cổng Serial: {e}")
        return

    sample_count = 1

    try:
        while True:
            print("\n-------------------------------------------")
            input(f">> Đặt quả mẫu #{sample_count} vào buồng đo, rồi nhấn ENTER để bắt đầu quét...")

            # Xóa sạch bộ đệm cũ để lấy giá trị mới nhất
            ser.reset_input_buffer()
            
            # Đọc 1 dòng dữ liệu từ ESP32
            raw_line = ser.readline().decode('utf-8', errors='ignore').strip()

            # Bỏ qua nếu đọc phải tiêu đề hoặc dòng trống
            while not raw_line or "F1_415" in raw_line or "Không tìm thấy" in raw_line:
                raw_line = ser.readline().decode('utf-8', errors='ignore').strip()

            values = raw_line.split(',')

            # Kiểm tra xem có đủ 10 giá trị kênh quang phổ không
            if len(values) == 10:
                print(f"Dữ liệu phổ nhận được: {values}")
                
                # Nhập nhãn Ground Truth (độ chín 1.0-6.0 hoặc độ ngọt °Brix)
                ground_truth = input(f">> Nhập giá trị Ground Truth (Score/Brix) cho mẫu #{sample_count}: ").strip()

                # Ghi vào file CSV
                row = [sample_count] + values + [ground_truth]
                with open(OUTPUT_FILE, mode='a', newline='') as file:
                    writer = csv.writer(file)
                    writer.writerow(row)

                print(f"=> Đã lưu thành công mẫu #{sample_count} vào {OUTPUT_FILE}!")
                sample_count += 1
            else:
                print(f"Dữ liệu đọc bị lỗi hoặc không đủ 10 kênh: '{raw_line}'. Vui lòng thử lại!")

    except KeyboardInterrupt:
        print("\nĐã dừng thu thập dữ liệu.")
    finally:
        ser.close()

if __name__ == '__main__':
    main()