#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct details
{ char name[1][100];
int day; int month; int year;
int value_per_day; }
hisse1, hisse2, hisse3;
int fonk(int x,int j,int u,int v)
{int y,b=0,max=0;
int n;n=x;
 for( j=0;j<30;j++)
 {y=x;
 int t=rand()%2;
 if(t==1)
x=x+rand()%10000;
 else
 x=x-rand()%10000;

 if(x>max)max=x; if(b==0){printf("Bu hissede:\n");}b=1;
 if(x>y && x>=0)
 {printf("%d.%d.%d tarihindeki kariniz: %d\t Hissenin degeri: %d \n",j+1,u,v,x-y,x);}
 else if(x<y && x>=0)
 { printf("%d.%d.%d tarihindeki zarariniz: %d\t Hissenin degeri: %d \n",j+1,u,v,y-x,x);}
 else
 printf("%d.%d.%d tarihindeki zarariniz: %d\t Hissenin degeri: 0 \n",j+1,u,v,y-x);

 if((j+1)%7==0)
 {

 {printf("%d hafta toplam kariniz: %d \n",(j+1)/7,x-n);}


 }

}
printf("Bu ay bu hissenin en degerli oldugu gun degeri %d olmustur,eger hisseni o gun satsaydiniz %d karda olacaktiniz.\n",max,max-n);};
int main()
{ printf("1 mart tarihinde 3 hisse satin aldiniz.\nBu hisselerin fiyatini girmekle ay kontrol edebilirsiniz...\n");

 srand(time(NULL));
struct details;
hisse1.year=2022;
hisse2.year=2022;
hisse3.year=2022;
hisse1.month=3;
hisse2.month=3;
hisse3.month=3;
printf("Hisse1 in degerini giriniz:\n");
scanf("%d",&hisse1.value_per_day);
fonk(hisse1.value_per_day,hisse1.day,hisse1.month,hisse1.year);
printf("Hisse2 in degerini giriniz:\n");
scanf("%d",&hisse2.value_per_day);
fonk(hisse2.value_per_day,hisse2.day,hisse2.month,hisse2.year);
printf("Hisse3 in degerini giriniz:\n");
scanf("%d",&hisse3.value_per_day);
fonk(hisse3.value_per_day,hisse3.day,hisse3.month,hisse3.year);
}
