//Created by Frans surya pati harau_23343039

//Fugsi gets()

#include <stdio.h>

int main () {
   char name[50], web_address[50];

   printf("Nama: ");
   gets(name);
   
   printf("Alamat web: ");
   gets(web_address);

   printf("You entered: %s\n", name);
   printf("Web address: %s\n", web_address);

   return(0);
}