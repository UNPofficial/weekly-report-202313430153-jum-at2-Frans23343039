//Created by Frans surya pati harau_23343039

//Tugas 3_Jobsheet 4

#include <stdio.h>


int main() {
    float nilaiPresensi = 85;
    float nilaiPraktek = 65;
    float nilaiUTS = 80;
    float nilaiUAS = 75;
    float nilaiAkhir;

    // Menghitung nilai akhir
    nilaiAkhir = (nilaiPresensi * 0.10) + (nilaiPraktek * 0.20) + (nilaiUTS * 0.30) + (nilaiUAS * 0.40);

    printf("Nilai Akhir : %.2f\n", nilaiAkhir);

    return 0;
}