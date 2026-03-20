#include <stdio.h>

int main() {
    char lagi;
    int angka;

    do {
        printf("Masukkan angka: ");
        scanf("%d", &angka);

        if (angka % 2 == 0)
            printf("Genap\n");
        else
            printf("Ganjil\n");

        printf("Ulangi program? (y/n): ");
        scanf(" %c", &lagi);

    } while (lagi == 'y' || lagi == 'Y');

    return 0;
}