#include <stdio.h>

int main() {
    float a, b, c;

    printf("Masukkan 3 nilai: ");
    scanf("%f %f %f", &a, &b, &c);

    float rata = (a + b + c) / 3;

    printf("Rata-rata: %.2f\n", rata);

    return 0;
}