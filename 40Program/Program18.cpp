#include <stdio.h>

int main() {
    int pilih, jumlah;
    float total = 0;
    char lagi;

    do {
        printf("\nMenu:\n");
        printf("1. Nasi Goreng (15000)\n");
        printf("2. Mie Goreng (12000)\n");
        printf("3. Es Teh (5000)\n");
        printf("Pilih: ");
        scanf("%d", &pilih);

        printf("Jumlah: ");
        scanf("%d", &jumlah);

        if (pilih == 1)
            total += 15000 * jumlah;
        else if (pilih == 2)
            total += 12000 * jumlah;
        else if (pilih == 3)
            total += 5000 * jumlah;
        else
            printf("Menu tidak tersedia\n");

        printf("Tambah lagi? (y/n): ");
        scanf(" %c", &lagi);

    } while (lagi == 'y' || lagi == 'Y');

    printf("Total bayar: %.0f\n", total);

    return 0;
}