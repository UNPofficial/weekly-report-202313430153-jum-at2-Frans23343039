//Created by Frans surya pati harau_23343039

//Tugas 2_Jobsheet 6

#include <stdio.h>


int main() {
    int i, j;
    int n = 5; // Jumlah baris yang ingin diietak

    for (i = 1; i <= n; i++) {
        // cetak i bintang pada baris ke-i
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}