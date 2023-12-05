//Created by Frans surya pati harau_23343039

//Latihan 1_Jobsheet 10_Membuat program dengan enum

#include <stdio.h>

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

void main() {
    enum hari sekarang;
    sekarang = RABU;
    printf("Sekarang hari ke-%d", sekarang + 1);
}