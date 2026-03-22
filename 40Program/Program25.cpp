#include <stdio.h>

int main() {
    int n, i, cari, ketemu = 0;
    int kode[100];

    printf("Jumlah barang: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Kode barang %d: ", i+1);
        scanf("%d", &kode[i]);
    }

    printf("Cari kode barang: ");
    scanf("%d", &cari);

    for (i = 0; i < n; i++) {
        if (kode[i] == cari) {
            printf("Barang ditemukan di posisi %d\n", i+1);
            ketemu = 1;
        }
    }

    if (!ketemu)
        printf("Barang tidak ditemukan\n");

    return 0;
}