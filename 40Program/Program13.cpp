#include <stdio.h>

int main() {
    int awal, akhir, i;

    printf("Masukkan angka awal: ");
    scanf("%d", &awal);

    printf("Masukkan angka akhir: ");
    scanf("%d", &akhir);

    for (i = awal; i <= akhir; i++) {
        printf("%d ", i);
    }

    return 0;
}