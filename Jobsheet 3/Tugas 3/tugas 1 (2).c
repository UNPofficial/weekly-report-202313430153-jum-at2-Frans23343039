#include <stdio.h>

// create by 23343039_Frans Surya Pati Harau

int main() {
	
	//deklarasi 
    float nilaiTukar = 14250.0;  // nilai kurs 1$ = Rp. 14.250
    float uangyangditukar = 2500000.0;  // Jumlah uang dalam Rupiah

    // Konversi Rupiah ke Dollar
    uangyangditukar = uangyangditukar / nilaiTukar;

    printf("Jumlah uang dollar yang akan diberikan : $%.2f\n", uangyangditukar);
    
    return 0;
}
