#include <stdio.h>

float rataUmur(int *umur, int n) {
    int i, total = 0;

    for (i = 0; i < n; i++) {
        total += *(umur + i);
    }

    return (float) total / n;
}

int main() {
    int umur[5], i;

    printf("Masukkan umur 5 orang:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &umur[i]);
    }

    printf("Rata-rata umur: %.2f\n", rataUmur(umur, 5));

    return 0;
}