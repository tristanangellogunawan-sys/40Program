#include <stdio.h>

int main() {
    int n, i;
    int data[100];

    printf("Jumlah data: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Data ke-%d: ", i+1);
        scanf("%d", &data[i]);
    }

    printf("Isi array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }

    return 0;
}