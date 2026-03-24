#include <stdio.h>

void tampil(float *uang, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Hari %d: %.0f\n", i+1, *(uang + i));
    }
}

int main() {
    float uang[3];
    int i;

    printf("Masukkan pengeluaran 3 hari:\n");
    for (i = 0; i < 3; i++) {
        scanf("%f", &uang[i]);
    }

    printf("\nData pengeluaran:\n");
    tampil(uang, 3);

    return 0;
}