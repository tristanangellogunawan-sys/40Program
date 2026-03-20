#include <stdio.h>

int main() {
    int i, angka, total = 0;

    for (i = 1; i <= 5; i++) {
        printf("Masukkan angka ke-%d: ", i);
        scanf("%d", &angka);
        total += angka;
    }

    printf("Total: %d\n", total);

    return 0;
}