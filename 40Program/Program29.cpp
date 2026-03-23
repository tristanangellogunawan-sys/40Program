#include <stdio.h>

int main() {
    int n, i;
    char nama[100][50];
    float nilai[100];

    printf("Jumlah mahasiswa: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Nama mahasiswa %d: ", i+1);
        scanf("%s", nama[i]);

        printf("Nilai: ");
        scanf("%f", &nilai[i]);
    }

    printf("\nData Mahasiswa:\n");
    for (i = 0; i < n; i++) {
        printf("%s - %.2f", nama[i], nilai[i]);

        if (nilai[i] >= 56)
            printf(" (Lulus)\n");
        else
            printf(" (Tidak Lulus)\n");
    }

    return 0;
}