#include <stdio.h>

int main() {
    char *produk[5] = {"Air Mineral", "Snack", "Kopi", "Teh Botol", "Susu"};
    int harga[5] = {15000, 20000, 25000, 18000, 22000};
    int total = 0, jumlah = 0, pilihan;
    int pilihanUser[3];  

    printf("=== VENDING MACHINE ===\n");

    while (1) {
        printf("\nDaftar Produk:\n");
        for (int i = 0; i < 5; i++) {
            printf("%d. %s - Rp%d\n", i + 1, produk[i], harga[i]);
        }
        printf("6. Selesai memilih\n");

        printf("\nPilih produk (1-6): ");
        scanf("%d", &pilihan);

        if (pilihan == 6)
            break;

        if (pilihan < 1 || pilihan > 6) {
            printf("Pilihan tidak valid!\n");
            continue;
        }

        total += harga[pilihan - 1];
        pilihanUser[jumlah] = pilihan - 1; 
        jumlah++;

        if (jumlah >= 3 || total >= 50000) {
            printf("\n=== Transaksi Selesai ===\n");
            printf("Produk yang dipilih:\n");
            for (int i = 0; i < jumlah; i++) {
                printf("- %s (Rp%d)\n", produk[pilihanUser[i]], harga[pilihanUser[i]]);
            }
            printf("Total produk: %d\n", jumlah);
            printf("Total harga: Rp%d\n", total);
            return 0;
        }

        printf("Produk ditambahkan! Total sementara: Rp%d\n", total);
    }

    printf("\n=== Transaksi Dihentikan ===\n");
    if (jumlah == 0) {
        printf("Tidak ada produk yang dipilih.\n");
    } else {
        printf("Produk yang dipilih:\n");
        for (int i = 0; i < jumlah; i++) {
            printf("- %s (Rp%d)\n", produk[pilihanUser[i]], harga[pilihanUser[i]]);
        }
        printf("Total produk: %d\n", jumlah);
        printf("Total harga: Rp%d\n", total);
    }

    return 0;
}