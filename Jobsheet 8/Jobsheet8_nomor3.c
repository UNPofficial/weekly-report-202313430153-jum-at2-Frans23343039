#include <stdio.h>
#include <math.h>

// Fungsi untuk menghitung luas lingkaran
float luas(float radius) {
    return M_PI * radius * radius;
}

// Fungsi untuk menghitung keliling lingkaran
float keliling(float radius) {
    return 2 * M_PI * radius;
}

int main() {
    float radius;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &radius);

    if (radius < 0) {
        printf("Jari-jari tidak bisa negatif.\n");
    } else {
        float hasilLuas = luas(radius);
        float hasilKeliling = keliling(radius);

        printf("Luas lingkaran: %.2f\n", hasilLuas);
        printf("Keliling lingkaran: %.2f\n", hasilKeliling);
    }

    return 0;
}
