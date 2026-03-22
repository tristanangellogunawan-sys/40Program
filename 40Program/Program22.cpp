#include <stdio.h>

int main() {
    int n, i, idx_max = 0;
    float nilai[100];

    printf("Jumlah mahasiswa: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Nilai %d: ", i+1);
        scanf("%f", &nilai[i]);

        if (nilai[i] > nilai[idx_max]) {
            idx_max = i;
        }
    }

    printf("Nilai tertinggi: %.2f (Mahasiswa ke-%d)\n", nilai[idx_max], idx_max+1);

    return 0;
}