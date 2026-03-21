#include <stdio.h>

int main() {
    int n, i, angka, min;

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Masukkan angka ke-%d: ", i);
        scanf("%d", &angka);

        if (i == 1 || angka < min) {
            min = angka;
        }
    }

    printf("Nilai terkecil: %d\n", min);

    return 0;
}