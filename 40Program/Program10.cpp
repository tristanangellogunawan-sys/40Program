#include <stdio.h>

int main() {
    int total;
    float diskon = 0;

    printf("Masukkan total belanja: ");
    scanf("%d", &total);

    if (total > 200000)
        diskon = 0.20 * total;
    else if (total > 100000)
        diskon = 0.10 * total;

    printf("Diskon: %.0f\n", diskon);
    printf("Total bayar: %.0f\n", total - diskon);

    return 0;
}