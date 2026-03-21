#include <stdio.h>

int main() {
    int n, i, count = 0;
    float nilai[100], total = 0, rata;

    printf("Jumlah data: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Nilai ke-%d: ", i+1);
        scanf("%f", &nilai[i]);
        total += nilai[i];
    }

    rata = total / n;

    for (i = 0; i < n; i++) {
        if (nilai[i] > rata)
            count++;
    }

    printf("Rata-rata: %.2f\n", rata);
    printf("Jumlah di atas rata-rata: %d\n", count);

    return 0;
}