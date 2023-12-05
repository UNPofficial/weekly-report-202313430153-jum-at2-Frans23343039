//created by Frans surya pati harau_23343039


//Tugas 2_Jobsheet 9 : kalimat terbalik

#include <stdio.h>
#include <string.h>

void kalimatTerbalik(char kata[]) {
    int i, j;
    char hasil;

    for (i = 0, j = strlen(kata) - 1; i < j; i++, j--) {
        hasil = kata[i];
        kata[i] = kata[j];
        kata[j] = hasil;
    }
}

int main() {
    char kalimat[1000];

    printf("Ketikkan kalimat : ");
    fgets(kalimat, sizeof(kalimat), stdin);

    kalimat[strcspn(kalimat, "\n")] = '\0';
    kalimatTerbalik(kalimat);

    printf("Kalimat terbalik : %s\n", kalimat);

    return 0;
}