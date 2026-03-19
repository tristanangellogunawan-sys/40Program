#include <stdio.h>

int main() {
    int p, l;

    printf("Masukkan panjang dan lebar: ");
    scanf("%d %d", &p, &l);

    printf("Luas: %d\n", p * l);
    printf("Keliling: %d\n", 2 * (p + l));

    return 0;
}