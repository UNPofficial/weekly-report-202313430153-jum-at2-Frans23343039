//created by Frans surya pati harau_23343039


//Tugas 1_Jobsheet 9

#include <stdio.h>
#include <string.h>

void printMundur(char *kataKata, int mulai, int selesai) {
    for (int i = mulai; i <= selesai; i++) {
        printf("%c", *(kataKata + i));
    }
}

int main() {
    char kata[] = "BORLAND";
    int panjangKata = strlen(kata);

    for (int i = panjangKata - 1; i >= 0; i--) {
        printMundur(kata, i, panjangKata - 1);
        printf("\n");
    }

    return 0;
}