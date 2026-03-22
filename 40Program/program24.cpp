#include <stdio.h>

int main() {
    int n, i;
    float harga[100], total = 0;

    printf("Jumlah item dibeli: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Harga item %d: ", i+1);
        scanf("%f", &harga[i]);
        total += harga[i];
    }

    printf("\nStruk belanja:\n");
    for (i = 0; i < n; i++) {
        printf("Item %d: %.0f\n", i+1, harga[i]);
    }

    printf("Total bayar: %.0f\n", total);

    return 0;
}