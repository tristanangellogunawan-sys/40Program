#include <stdio.h>

int main() {
    int n, i, j, cari;
    int data[100];

    printf("Jumlah data: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Data %d: ", i+1);
        scanf("%d", &data[i]);
    }

    printf("Data yang ingin dihapus: ");
    scanf("%d", &cari);

    for (i = 0; i < n; i++) {
        if (data[i] == cari) {
            for (j = i; j < n-1; j++) {
                data[j] = data[j+1];
            }
            n--;
            break;
        }
    }

    printf("Data setelah dihapus:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }

    return 0;
}