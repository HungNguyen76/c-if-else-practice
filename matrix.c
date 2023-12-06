#include <stdio.h>

float x[3][2], y[2][4], z[3][4];

int main() {
    int i, j, k;

    // Nhập giá trị cho ma trận X
    printf("\nNhập giá trị cho ma trận X:\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 2; ++j) {
            printf("x[%d][%d]=", i, j);
            scanf("%f", &x[i][j]);
        }
    }

    // Nhập giá trị cho ma trận Y
    printf("\nNhập giá trị cho ma trận Y:\n");
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 4; ++j) {
            printf("y[%d][%d]=", i, j);
            scanf("%f", &y[i][j]);
        }
    }

    // Tính tích hai ma trận mxn và nxp và lưu vào ma trận Z
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 4; ++j) {
            z[i][j] = 0.0;
            for (k = 0; k < 2; ++k) {
                z[i][j] += x[i][k] * y[k][j];
            }
        }
    }

    // In ma trận Z
    printf("\nMa trận Z (tích của ma trận X và Y):\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 4; ++j) {
            printf("%8.2f ", z[i][j]);
        }
        printf("\n");
    }

    return 0;
}
