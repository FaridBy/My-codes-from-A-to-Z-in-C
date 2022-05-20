#include <stdio.h>

#include <locale.h>

int basamak(int sayi);

main(){

setlocale(LC_ALL,"Turkish");

int sayi;

printf("Bu program girdiðiniz sayýnýn basamaklarýnýn toplamýný bulur: ");

scanf("%d",&sayi);

printf("%d",basamak(sayi));

return 0;

}

int basamak(int sayi){

int kalan;

if(sayi==0){

return 0;

}

else{

kalan=sayi%10;

sayi/=10;

return kalan+basamak(sayi);

}

}
