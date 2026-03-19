#include <stdio.h>

int main() {
    int nilai;

    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    if (nilai >= 75)
        printf("Lulus\n");
    else
        printf("Tidak lulus\n");

    return 0;
}