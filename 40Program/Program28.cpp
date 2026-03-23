#include <stdio.h>

int main() {
    int a[2][2], b[2][2], hasil[2][2];
    int i, j;

    printf("Matrix A(2 x 2):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix B(2 x 2):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            hasil[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Hasil Penjumlahan Matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }

    return 0;
}