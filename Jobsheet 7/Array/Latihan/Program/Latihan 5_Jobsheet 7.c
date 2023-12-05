//Created by Frans surya pati harau_23343039

//Latihan 5_Jobsheet 7_Mengambil panjang Array

#include <stdio.h>

void main(){
    // membuat array
    int nilai[5] = {33, 22, 11, 44, 21};

    //  mengambil banyaknya isi array
    int length = sizeof(nilai) / sizeof(*nilai);

    printf("Banyaknya isi array nilai: %d\n", length);
}