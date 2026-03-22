#include <stdio.h>

int main() {
    int n, i;
    float nilai[100];

    printf("Jumlah mahasiswa: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Nilai mahasiswa %d: ", i+1);
        scanf("%f", &nilai[i]);
    }

    printf("\nDaftar nilai:\n");
    for (i = 0; i < n; i++) {
        printf("Mahasiswa %d = %.2f\n", i+1, nilai[i]);
    }

    return 0;
}