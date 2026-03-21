#include <stdio.h>

int main() {
    int n, i, harga, total = 0;
    float diskon = 0;

    printf("Jumlah barang: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Harga barang ke-%d: ", i);
        scanf("%d", &harga);
        total += harga;
    }

    if (total > 200000)
        diskon = 0.2 * total;
    else if (total > 100000)
        diskon = 0.1 * total;

    printf("Total: %d\n", total);
    printf("Diskon: %.0f\n", diskon);
    printf("Bayar: %.0f\n", total - diskon);

    return 0;
}