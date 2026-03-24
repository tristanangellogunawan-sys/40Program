#include <stdio.h>

void tambahStok(int *stok) {
    *stok += 10;
}

int main() {
    int stok;

    printf("Masukkan stok awal: ");
    scanf("%d", &stok);

    tambahStok(&stok);

    printf("Stok setelah ditambah: %d\n", stok);

    return 0;
}