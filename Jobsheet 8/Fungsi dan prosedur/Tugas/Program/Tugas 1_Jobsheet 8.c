//Created by Frans surya pati harau_23343039

//Tugas 1_Jobsheet 8

#include <stdio.h>

int main() {
    int bilangan1, bilangan2;
    printf("Masukkan dua bilangan bulat positif: ");
    scanf("%d %d", &bilangan1, &bilangan2);

    int hasil = bilangan1 * bilangan2;
    printf("%d x %d = ", bilangan1, bilangan2);

    // Menampilkan hasil sebagai penjumlahan
    for (int i = 0; i < bilangan1; i++) {
        printf("%d", bilangan2);
        if (i < bilangan1 - 1) {
            printf(" + ");
        }
    }
    
    printf(" = %d\n", hasil);

    return 0;
}