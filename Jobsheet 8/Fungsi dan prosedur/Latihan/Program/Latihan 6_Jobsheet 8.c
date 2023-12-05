//Created by Frans surya pati harau_23343039

//Latihan 6_Jobsjeet 8_Fungsi Rekursif


#include <stdio.h>
int sum(int n);

void main(){
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number);

    printf("sum = %d", result);
}

int sum(int num){
    if (num!=0)
        return num + sum(num-1); // fungsi sum() memanggil dirinya sendiri
    else
        return num;
}