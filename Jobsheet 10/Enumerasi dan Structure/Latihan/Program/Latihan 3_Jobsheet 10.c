//Created by Frans surya pati harau_23343039

//Latihan 3_Jobsheet 10_Veriabel enum hanya akan mengambil satu nilai dari konstanta yang ada

#include <stdio.h>

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

void main() {
    enum hari sekarang;
    sekarang = RABU;

    printf("Ukuran variabel enum: %d bytes\n", sizeof(sekarang));
}