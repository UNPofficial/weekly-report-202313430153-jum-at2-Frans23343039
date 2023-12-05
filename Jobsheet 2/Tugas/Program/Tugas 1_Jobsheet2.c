#include <stdio.h>

// Created by Frans surya pati harau_23343039

int main() {
    char nama[20]; 

    printf("Hello, siapa nama lengkapmu? ");
    scanf("%19[^\n]", nama); 

    printf("Selamat Datang %s Dalam Pemrograman C!\n", nama);

    return 0;

}