#include <stdio.h>

int totalJam(int *jam, int n) {
    int total = 0, i;

    for (i = 0; i < n; i++) {
        total += *(jam + i);
    }

    return total;
}

int main() {
    int jam[5], i;

    printf("Masukkan jam kerja 5 hari:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &jam[i]);
    }

    printf("Total jam kerja: %d\n", totalJam(jam, 5));

    return 0;
}