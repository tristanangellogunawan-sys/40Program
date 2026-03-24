#include <stdio.h>

void hitungGaji(int *jam) {
    int gaji = (*jam) * 10000;
    printf("Gaji: %d\n", gaji);
}

int main() {
    int jam;

    printf("Masukkan jumlah jam kerja: ");
    scanf("%d", &jam);

    hitungGaji(&jam);

    return 0;
}