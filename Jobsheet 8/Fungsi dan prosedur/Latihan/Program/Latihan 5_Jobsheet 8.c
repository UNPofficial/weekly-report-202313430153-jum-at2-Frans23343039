//Created by Frans surya pati harau_23343039

//Latihan 5_Jobsjeet 8_Fungsi yang mengambalikan nilai


#include <stdio.h>

float bagi(int a, int b){
    float hasil = (float)a / (float)b;
    return hasil;
}

void main(){
    printf("Hasil 5/2: %.2f\n", bagi(5, 2));
}