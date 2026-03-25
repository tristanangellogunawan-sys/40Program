#include <stdio.h>

int main() {
    int target = 15;   
    int tebakan;

    while(1){
        printf("Masukkan tebakan Anda: ");
        scanf("%d", &tebakan);

        if (tebakan == 99) {
            printf("Permainan dihentikan oleh user.\n");
            break;
        }

        if (tebakan == target) {
            printf("Cocok! Anda berhasil menebak angka %d\n", target);
            break;
        } else if (tebakan > target) {
            printf("Terlalu tinggi.\n");
        } else {
            printf("Terlalu rendah.\n");
        }
    }

    return 0;
}