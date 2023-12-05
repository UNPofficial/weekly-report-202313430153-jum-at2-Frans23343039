//Created by Frans surya pati harau_23343039

//Latihan 9_Jobsjeet 8_Pass by vale/Pass by reference

//contoh pass by value = kali_dua(4);
//Ini disebut pass by value, karena di sana kita memberikan nilai 4 

//contoh pass by reference = kali_dua(&nama_variabel);
//Ini disebut pass by reference, karena kita memberikan alamat memori.

//CONTOH :

#include <stdio.h>

void kali_dua(int *num){
    *num = *num * 2;
}

void main(){
    int angka = 9;

    // memanggil fungsi
    kali_dua(&angka);

    // mencetak isi variabel
    // setelah fungsi dipanggil
    printf("isi variabel angka = %d\n", angka);
}