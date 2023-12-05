//Created by Frans surya pati harau_23343039

//Tugas 4_Jobsheet 8


#include <stdio.h>

// Fungsi untuk menghitung besar potongan
float potong(float totalPembelian) {
    float diskon = 0;

    if (totalPembelian > 1000000 && totalPembelian <= 3000000) {
        diskon = totalPembelian * 0.20; // Diskon 20%
    } else if (totalPembelian > 3000000) {
        diskon = totalPembelian * 0.35; // Diskon 35%
    }

    return diskon;
}

int main() {
    float totalPembelian, diskon, totalSetelahDiskon;

    printf("Program Hitung Potongan\n");
    printf("Total Pembelian (Rp.) : ");
    scanf("%f", &totalPembelian);

    diskon = potong(totalPembelian);
    totalSetelahDiskon = totalPembelian - diskon;

    printf("Besar Diskon : %.2f (Rp.)\n", diskon);
    printf("Besar Yang Harus Dibayarkan : %.2f (Rp.)\n", totalSetelahDiskon);

    return 0;
}