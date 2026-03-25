#include <stdio.h>
#include <string.h>

#define MAX_KENDARAAN 3

float getTarifPerJam(const char* jenis) {
    float tarifDasar = 5000;

    if (strcmp(jenis, "mobil") == 0) {
        return tarifDasar;
    } else if (strcmp(jenis, "motor") == 0) {
        return tarifDasar * 0.5;
    } else if (strcmp(jenis, "truk") == 0) {
        return tarifDasar * 2;
    } else {
        return 0; 
    }
}

float hitungBiayaKendaraan(const char* jenis, int jam) {
    float tarifPerJam = getTarifPerJam(jenis);
    float total = tarifPerJam * jam;

    if (jam > 5) {
        total *= 0.9; 
    }

    return total;
}

float hitungTotalBiaya(float biaya[], int jumlah) {
    float total = 0;
    for (int i = 0; i < jumlah; i++) {
        total += biaya[i];
    }
    return total;
}

void cetakStruk(const char* nama, char jenis[][10], int jam[], float biaya[], int jumlah) {
    printf("\n===== STRUK PARKIR =====\n");
    printf("Nama Pelanggan: %s\n\n", nama);

    for (int i = 0; i < jumlah; i++) {
        printf("Kendaraan %d:\n", i + 1);
        printf("Jenis  : %s\n", jenis[i]);
        printf("Durasi : %d jam\n", jam[i]);
        printf("Biaya  : Rp %.2f\n\n", biaya[i]);
    }

    float total = hitungTotalBiaya(biaya, jumlah);
    printf("TOTAL BIAYA: Rp %.2f\n", total);
    printf("========================\n");
}

int main() {
    char nama[50];
    int jumlah;

    char jenis[MAX_KENDARAAN][10];
    int jam[MAX_KENDARAAN];
    float biaya[MAX_KENDARAAN];

    printf("Masukkan nama pelanggan: ");
    fgets(nama, sizeof(nama), stdin);
    nama[strcspn(nama, "\n")] = 0; 

    printf("Masukkan jumlah kendaraan (max 3): ");
    scanf("%d", &jumlah);

    if (jumlah > MAX_KENDARAAN || jumlah <= 0) {
        printf("Jumlah kendaraan tidak valid!\n");
        return 1;
    }

    for (int i = 0; i < jumlah; i++) {
        printf("\nKendaraan %d\n", i + 1);
        printf("Jenis (mobil/motor/truk): ");
        scanf("%s", jenis[i]);

        printf("Lama parkir (jam): ");
        scanf("%d", &jam[i]);

        biaya[i] = hitungBiayaKendaraan(jenis[i], jam[i]);
    }

    cetakStruk(nama, jenis, jam, biaya, jumlah);

    return 0;
}