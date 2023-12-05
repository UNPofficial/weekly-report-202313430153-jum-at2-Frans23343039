//Created by Frans surya pati harau_23343039

//Fungsi fgets()

#include <stdio.h>

int main(){
    char name[50], email[50];
    
    printf("Nama: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Email: ");
    fgets(email, sizeof(email), stdin);
   
    printf("\n-------------------------\n");
    printf("Nama anda: %s", name);
    printf("Alamat email: %s", email);
    
    return 0;
}