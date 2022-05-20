#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>


//Let's start...

int main()
{setlocale(LC_ALL,"Turkish");
srand(time(NULL)); 

//Adlarýn tanýmlanmasý
char a[10][100]={
{"turkey"},
{"istanbul"},
{"azerbaijan"},
{"baku"},
{"football"},
{"messi"},
{"lovely"},
{"book"},
{"marmara"},
{"barcelona"}
};
printf("Oyuna baþlayabilirsiniz, baþarýlar...\n");
printf("NOT* Çýkan bi harfi 2. kez girerseniz kaybedersiniz!\n\n");
printf("Bulacaðýnýz Kelime:     ");
int i=rand()%10,num=0;
int ch,length=strlen(a[i]),g=strlen(a[i]);

char ok[11]={3,3,3,3,3,3,3,3,3,3,3};

	   for(int v=0;v<length;v++)
{
	printf("_ ");
}
printf("\n\n\n");
   
int x=2*length; 
 printf("%d þansýnýz var:\n",x);
	printf("Kelimedeki bulunmayan harf sayý: %d\n\n\n ",g);
	int az=0;
	
	// Harf kontrölü
for(int o=0;o<4*length;o++)

{ 

scanf("%s",&ch);
x--;
for(int l=0;l<length;l++)
{ 
     if(ch==a[i][l])
     {num++;g--;az++;
	 ok[l]=ch;} 
} 
for(int s=0;s<strlen(a[i]);s++){
printf("%c ",ok[s]);} //Kelimenin bulduðumuz harflerinin ekrana yazdýrýlmasý


printf("\n");
printf("-Kelimede girdiðiniz harften %d tane var.\n",num);
printf("*%d þansýnýz kaldý:\n",x);
	printf("-Kelimedeki bulunmayan harf sayý: %d\n",g);
printf("-Þimdiye kadar bulduðunuz harf sayýsý: %d\n\n\n",az);

num=0;
char us[10]; 
//Kazanma ve Kaybetme
	if(g==0 || g<0 ){printf("Kelimedeki tüm harfler bulundu! Kazandýnýz!"); break;}
	if(x==0)
	
{printf("Son þans olarak sözü girin: "); 

scanf("%s",&us);
	if(us[0]!=a[i][0] || us[1]!=a[i][1] || us[2]!=a[i][2] || us[3]!=a[i][3]  )
{	printf("Kaybettiniz! Kelime: %s",a[i]);
	}
	else printf("Tebrikler! Kelimeyi buldunuz!");
;break;}
	
}
}



