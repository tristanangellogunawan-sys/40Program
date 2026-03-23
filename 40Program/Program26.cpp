#include <stdio.h>

int main() {
    int n, i, j;
    float nilai[100], temp;

    printf("Jumlah mahasiswa: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Nilai %d: ", i+1);
        scanf("%f", &nilai[i]);
    }

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (nilai[j] < nilai[j+1]) {
                temp = nilai[j];
                nilai[j] = nilai[j+1];
                nilai[j+1] = temp;
            }
        }
    }

    printf("\nUrutan Nilai Mahasiswa tertinggi:\n");
    for (i = 0; i < n; i++) {
        printf("%d. %.2f\n", i+1, nilai[i]);
    }

    return 0;
}