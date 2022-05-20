#include <stdio.h>

#include <locale.h>

int buyukBul(int *ptr);

#define x 5

main(){

setlocale(LC_ALL,"Turkish");

int dizi[x],j;

int *p=dizi;

printf("%d elemanlý bir dizi oluþturun ve en büyük elemaný bulalým\n",x);

for(j=0;j<x;j++){

scanf("%d",(p+j));

}

printf("\nMax element of array:%d\n",buyukBul(dizi));

return 0;

}

int i=0;//i deðiþkenini bir çeþit sayaç gibi kullandým

int enBuyuk=0;

int buyukBul(int *ptr){

int sonuc;

if(i==x){

sonuc=enBuyuk;

enBuyuk=0;

i=0;

return sonuc;

}

else if(*(ptr+i)>=enBuyuk){

enBuyuk=*(ptr+i);

i++;

return buyukBul(ptr);

}

else{

i++;

return buyukBul(ptr);

}

}
