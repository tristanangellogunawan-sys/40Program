#include <stdio.h>

int main() {
    int stok[5], i;

    printf("Masukkan stok 5 barang:\n");

    for (i = 0; i < 5; i++) {
        printf("Stok barang %d: ", i+1);
        scanf("%d", &stok[i]);
    }

    printf("\nBarang yang stoknya habis:\n");
    for (i = 0; i < 5; i++) {
        if (stok[i] == 0) {
            printf("Barang ke-%d habis\n", i+1);
        }
    }

    return 0;
}