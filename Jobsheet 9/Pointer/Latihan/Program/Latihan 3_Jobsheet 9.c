//Created by Frans surya pati harau_23343039

//Latihan 3_Jobsheet 9_	 Pointer untuk Pass by Reference pada Fungsi dengan menggunakan pass by value

#include <stdio.h>

void add_score(int score){
    score = score + 5;
}

void main(){
    int score = 0;

    printf("score sebelum diubah: %d\n", score);
    add_score(score);
    printf("score setelah diubah: %d\n", score);
}