#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void hesap(int *dizi, int *max, int *min, float *ort,int elemanSayisi);
void diziYazdirma(int *p,int elemanSayisi);
void diziOlusturma(int *p, int elemanSayisi);

int main (){
	srand(time(NULL));
	int dizi[10], max, min;
	float ort;
	diziOlusturma(&dizi[0], 10);
	diziYazdirma(&dizi[0], 10);
	hesap(&dizi[0], &max, &min, &ort, 10);
	printf("Dizinin En Buyuk Elemani: %d\n", max);
	printf("Dizinin En Kucuk Elemani: %d\n", min);
	printf("Dizinin Ortalamasi: %.3f\n", ort);
}

void hesap(int *dizi, int *max, int *min, float *ort, int elemanSayisi){
	int toplam=0, i;
	*max=*(dizi);
	*min=*(dizi);
	for(i=0;i<elemanSayisi;i++){
		if(*max<*(dizi+i)){
			*max=*(dizi+i);
		}
		if(*min>*(dizi+i)){
			*min=*(dizi+i);
		}
		toplam += *(dizi+i);
	}
	*ort = (float)toplam/10 ;
}
void diziYazdirma(int *p,int elemanSayisi){
	int i;
	for (i=0;i<elemanSayisi;i++){
		printf("%d  ",*(p+i));
	}
	printf("\n");
}
void diziOlusturma(int *p, int elemanSayisi){
	int i;
	for (i=0;i<elemanSayisi;i++){
		*(p+i)=rand()%100;
	}		
}
