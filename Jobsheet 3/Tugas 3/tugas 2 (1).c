#include <stdio.h>

//create by 23343039_Frans Surya Pati Harau

int main() {
    float celcius, kelvin, fahrenheit, reamur;

    // Input suhu dalam Celcius
    printf("Masukkan Suhu (Celcius) = ");
    scanf("%f", &celcius);

    // Konversi suhu ke Kelvin, Fahrenheit, dan Reamur
    kelvin = celcius + 273.15;
    fahrenheit = (celcius * 1.8) + 32;
    reamur = celcius * 0.8;

    // Output hasil konversi suhu
    printf("Suhu yang dimasukkan  = %2.f\n", celcius);
    printf("Suhu dalam Kelvin     = %.2f\n", kelvin);
    printf("Suhu dalam Fahrenheit = %.2f\n", fahrenheit);
    printf("Suhu dalam Reamur     = %.2f\n", reamur);

    return 0;
}
