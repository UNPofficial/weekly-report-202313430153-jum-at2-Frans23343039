//created by Frans surya pati harau_23343039
//Tugas_Jobsheet 9 no 3b : perhitungan dengan pointer


#include <stdio.h>

int main(){
	int lesley = 57082;
	int *layla;
	int balmond;
	
	layla = &lesley;
	balmond = *layla + 1;
	
	printf("Nilai Layla	: %i\n", *layla);
	printf("Nilai Balmond	: %i\n", balmond);
	
	return 0;
}