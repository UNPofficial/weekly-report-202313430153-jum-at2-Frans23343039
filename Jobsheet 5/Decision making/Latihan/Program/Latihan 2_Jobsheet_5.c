//Created by Frans surya pati harau_23343039

//Latihan 2_Jobsheet 5_Pernyataan if/else

#include <stdio.h>

void main(){
    // membuat array karakter untuk menyimpan password
    char password[30];

    printf("==== Program Login ====\n");
    printf("Masukan password: ");
    scanf("%s", &password);

    // percabangan if/esle
    if( strcmp(password, "kopi") == 0 ){
        printf("Selamat datang bos!\n");
    } else {
        printf("Password salah, coba lagi!\n");
    }

    printf("Terimakasih sudah menggunakan aplikasi ini!\n");
}