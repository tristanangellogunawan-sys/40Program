#include <stdio.h>

int main() {
    int x, y, i;

    printf("Masukkan nilai x: ");
    scanf("%d", &x);

    printf("Masukkan nilai awal (Y): ");
    scanf("%d", &y);

    printf("Deret: ");
    for (i = 0; i < x; i++) {
        printf("%d ", y + i * x);
    }

    return 0;
}