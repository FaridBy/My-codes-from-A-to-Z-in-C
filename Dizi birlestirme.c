#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void diziBirlestirme(int *p1, int *p2, int *p3, int elemanSayisi);
void diziSiralama(int *p, int elemanSayisi);
void diziYazdirma(int *p, int elemanSayisi);
void diziOlusturma(int *p, int elemanSayisi);

int main(){
	srand(time(NULL));
	int dizi1[10], dizi2[10],dizi3[20];
	//1. diziyi olusturma ve siralama 
	diziOlusturma(&dizi1[0],10);
	diziSiralama(&dizi1[0],10);
	diziYazdirma(&dizi1[0],10);
	//2. diziyi olusturma ve siralama
	diziOlusturma(&dizi2[0],10);
	diziSiralama(&dizi2[0],10);
	diziYazdirma(&dizi2[0],10);
	//2 diziyi sirali bir sekilde 3. bir fonksiyona siralama
	diziBirlestirme(&dizi1[0],&dizi2[0],&dizi3[0],10);
	diziYazdirma(&dizi3[0],20);
	
	return 0;
}
void diziBirlestirme(int *p1, int *p2, int *p3, int elemanSayisi){
	int i=0, j=0;
	while(i+j<elemanSayisi*2){
		if (i==elemanSayisi){
			*(p3+i+j)=*(p2+j);
			j++;
		}
		else if (j==elemanSayisi){
			*(p3+i+j)=*(p1+i);
			i++;
		}
		else if (*(p1+i)<=*(p2+j)){
			*(p3+i+j)=*(p1+i);
			i++;
		}
		else if (*(p1+i) > *(p2+j)){
			*(p3+i+j)=*(p2+j);
			j++;
		}
	}
}
void diziSiralama(int *p, int elemanSayisi){
	int i , j, temp;
	for (i=0;i<elemanSayisi;i++){
		for (j=0;j<elemanSayisi-1-i;j++){
			if( *(p+j) > *(p+j+1)){
				temp = *(p+j+1);
				*(p+j+1) = *(p+j);
				*(p+j) = temp;
			}
		}
	}
}
void diziYazdirma(int *p, int elemanSayisi){
	int i;
	for (i=0;i<elemanSayisi;i++){
		printf("%d   ",*(p+i));
	}
	printf("\n");
}
void diziOlusturma(int *p, int elemanSayisi){
	int i;
	for (i=0;i<elemanSayisi;i++){
		*(p+i)=rand()%100;
	}		
}
