#include <stdio.h>

// Created by 23343039-Frans

int main() {
    char nama[20]; 

    printf("Hallo, Nama Kamu siapa? ");
    scanf("%19[^\n]", nama); 

    printf("Selamat Datang %s Dalam Pemrograman C!\n", nama);

    return 0;

}