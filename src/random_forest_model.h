#include <string.h>
void add_vectors(double *v1, double *v2, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] + v2[i];
}
void mul_vector_number(double *v1, double num, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] * num;
}
void score(double * input, double * output) {
    double var0[2];
    double var1[2];
    double var2[2];
    double var3[2];
    double var4[2];
    double var5[2];
    double var6[2];
    double var7[2];
    double var8[2];
    double var9[2];
    double var10[2];
    double var11[2];
    double var12[2];
    double var13[2];
    double var14[2];
    double var15[2];
    double var16[2];
    double var17[2];
    double var18[2];
    double var19[2];
    double var20[2];
    if (input[9] <= 1.4940146803855896) {
        memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
    } else {
        memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    double var21[2];
    if (input[5] <= 0.9424741268157959) {
        if (input[2] <= 0.2843337208032608) {
            memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
        } else {
            memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var20, var21, 2, var19);
    double var22[2];
    if (input[2] <= 0.2978547662496567) {
        memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
    } else {
        memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var19, var22, 2, var18);
    double var23[2];
    if (input[2] <= 0.2978547662496567) {
        memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
    } else {
        if (input[5] <= 0.9424741268157959) {
            memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var18, var23, 2, var17);
    double var24[2];
    if (input[11] <= 8.211318969726562) {
        memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
    } else {
        memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var17, var24, 2, var16);
    double var25[2];
    if (input[7] <= 0.10884204506874084) {
        if (input[5] <= 0.8168878257274628) {
            memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var16, var25, 2, var15);
    double var26[2];
    if (input[2] <= 0.2917291820049286) {
        memcpy(var26, (double[]){0.0, 1.0}, 2 * sizeof(double));
    } else {
        if (input[11] <= 8.785415649414062) {
            memcpy(var26, (double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            memcpy(var26, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var15, var26, 2, var14);
    double var27[2];
    if (input[3] <= 0.5967445075511932) {
        memcpy(var27, (double[]){0.0, 1.0}, 2 * sizeof(double));
    } else {
        memcpy(var27, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var14, var27, 2, var13);
    double var28[2];
    if (input[1] <= 0.31554560363292694) {
        memcpy(var28, (double[]){0.0, 1.0}, 2 * sizeof(double));
    } else {
        if (input[6] <= 0.7436603307723999) {
            memcpy(var28, (double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            memcpy(var28, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var13, var28, 2, var12);
    double var29[2];
    if (input[9] <= 1.4940146803855896) {
        memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
    } else {
        memcpy(var29, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var12, var29, 2, var11);
    double var30[2];
    if (input[6] <= 0.7436603307723999) {
        if (input[3] <= 0.5752401947975159) {
            memcpy(var30, (double[]){0.0, 1.0}, 2 * sizeof(double));
        } else {
            memcpy(var30, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var30, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var11, var30, 2, var10);
    double var31[2];
    if (input[5] <= 0.9498162269592285) {
        memcpy(var31, (double[]){1.0, 0.0}, 2 * sizeof(double));
    } else {
        memcpy(var31, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var10, var31, 2, var9);
    double var32[2];
    if (input[9] <= 1.4940146803855896) {
        memcpy(var32, (double[]){1.0, 0.0}, 2 * sizeof(double));
    } else {
        memcpy(var32, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var9, var32, 2, var8);
    double var33[2];
    if (input[10] <= 1.182166874408722) {
        memcpy(var33, (double[]){1.0, 0.0}, 2 * sizeof(double));
    } else {
        memcpy(var33, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var8, var33, 2, var7);
    double var34[2];
    if (input[3] <= 0.5967445075511932) {
        memcpy(var34, (double[]){0.0, 1.0}, 2 * sizeof(double));
    } else {
        memcpy(var34, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var7, var34, 2, var6);
    double var35[2];
    if (input[10] <= 1.182166874408722) {
        memcpy(var35, (double[]){1.0, 0.0}, 2 * sizeof(double));
    } else {
        memcpy(var35, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var6, var35, 2, var5);
    double var36[2];
    if (input[9] <= 1.654431700706482) {
        memcpy(var36, (double[]){1.0, 0.0}, 2 * sizeof(double));
    } else {
        memcpy(var36, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var5, var36, 2, var4);
    double var37[2];
    if (input[6] <= 0.6966150403022766) {
        memcpy(var37, (double[]){1.0, 0.0}, 2 * sizeof(double));
    } else {
        memcpy(var37, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var4, var37, 2, var3);
    double var38[2];
    if (input[10] <= 1.182166874408722) {
        memcpy(var38, (double[]){1.0, 0.0}, 2 * sizeof(double));
    } else {
        memcpy(var38, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var3, var38, 2, var2);
    double var39[2];
    if (input[6] <= 0.7436603307723999) {
        memcpy(var39, (double[]){1.0, 0.0}, 2 * sizeof(double));
    } else {
        memcpy(var39, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var2, var39, 2, var1);
    mul_vector_number(var1, 0.05, 2, var0);
    memcpy(output, var0, 2 * sizeof(double));
}
