#include <stdio.h>

int main () {
    int i,x,y;

  printf("Masukkan nilai x: ");
    scanf("%d", &x);

printf("Masukkan nilai y: ");
    scanf("%d", &y);
    for (i = x; i <= y; i++) {
        printf("%d ", i*y);
    }

    return 0;
}