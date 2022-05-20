#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <math.h>

int main()
{srand(time(NULL));
setlocale(LC_ALL,"Turkish");
	int a[10],i,x,j,b,c,n;
	float toplam=0,toplam2=0;
		printf("Dizinin aralýðýný giriniz:");
	scanf("%d\n%d",&b,&c);
for(i=0;i<10;i++)
{
a[i]=rand()%(c-b)+1;
printf("Dizinin %d. elemaný: %d\n",i+1,a[i]);
toplam=toplam+a[i];
}

printf("Ortalama= %0.1f\n",toplam/10.0);
for(j=0;j<10;j++)
{
	toplam2=toplam2+pow(toplam/10.0-a[j],2);
}
printf("Standart sapma= %f",sqrt(toplam2/9));

}
