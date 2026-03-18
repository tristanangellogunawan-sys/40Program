#include <stdio.h>

int main() {
    char nama[50];
    int umur;

    printf("Masukkan nama: ");
    scanf("%s", nama);

    printf("Masukkan umur: ");
    scanf("%d", &umur);

    printf("Data: Nama Anda %s, umur Kamu %d tahun\n", nama, umur);

    return 0;
}