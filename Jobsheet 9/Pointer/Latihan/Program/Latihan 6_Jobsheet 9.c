//Created by Frans surya pati harau_23343039

//Latihan 6_Jobsheet 9_Pointer

#include <stdio.h>

void add_score(int *score){
    *score = *score + 5;
    printf("score dibuah ke: %d\n", *score);
}

void main(){
    int score = 0;

    printf("score sebelum diubah: %d\n", score);
    add_score(&score);
    add_score(&score);
    add_score(&score);
    add_score(&score);
    add_score(&score);
    add_score(&score);
    printf("score setelah diubah: %d\n", score);
}