#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void diziKaydirma(int *p, int elemanSayisi,int kaydirmaSayisi);
void diziYazdirma(int *p,int elemanSayisi);
void diziOlusturma(int *p, int elemanSayisi);

int main(){
	srand(time(NULL));
	int dizi[20], x;
	printf("Olusturulmus dizinin son elemanini en basa kac kere kayacagini giriniz: ");
	scanf("%d",&x);
	diziOlusturma(&dizi[0],20);
	diziYazdirma(&dizi[0],20);
	diziKaydirma(&dizi[0],20,x);
	diziYazdirma(&dizi[0],20);
	return 0;
}
void diziKaydirma(int *p, int elemanSayisi,int kaydirmaSayisi){
	int i, j, temp;
		for(i=0;i<kaydirmaSayisi;i++){//elemanların kaç kere kayacağını belirliyor
			for(j=elemanSayisi-1;j>=0;j--){//her elemanı bir sağ eleman yerine koyuyor
				if(j==elemanSayisi-1){
					temp=*(p+j);//son elemanı tempte tutuyoruz
				}
				else{
					*(p+j+1)=*(p+j);
				}
			}
			*p=temp;//tempte tuttuğumuz son elemanın değerini ilk elemana atıyoruz
		}
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
