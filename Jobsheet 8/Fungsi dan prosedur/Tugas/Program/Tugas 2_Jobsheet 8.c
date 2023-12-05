//Created by Frans surya pati harau_23343039

//Tugas 2_Jobsheet 8


#include <stdio.h>

// Fungsi untuk penjumlahan
float tambah(float a, float b) {
    return a + b;
}

// Fungsi untuk pengurangan
float kurang(float a, float b) {
    return a - b;
}

// Fungsi untuk perkalian
float kali(float a, float b) {
    return a * b;
}

// Fungsi untuk pembagian
float bagi(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Pembagian oleh nol tidak valid.\n");
        return 0;
    }
}

int main() {
    float num1, num2;
    char operator;

    printf("Masukkan dua bilangan: ");
    scanf("%f %f", &num1, &num2);

    printf("Pilih operasi aritmetik (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            printf("Hasil penjumlahan: %.2f\n", tambah(num1, num2));
            break;
        case '-':
            printf("Hasil pengurangan: %.2f\n", kurang(num1, num2));
            break;
        case '*':
            printf("Hasil perkalian: %.2f\n", kali(num1, num2));
            break;
        case '/':
            printf("Hasil pembagian: %.2f\n", bagi(num1, num2));
            break;
        default:
            printf("Operasi aritmetik tidak valid.\n");
    }

    return 0;
}