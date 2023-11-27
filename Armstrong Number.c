#include <stdio.h>
 #include <math.h>
 #include <locale.h>
 // Armstrong sayýsý rakamlarýnýn küpleri toplamý kendisine eþit olan sayýdýr...
void fonk();
int main()
{ setlocale(LC_ALL,"Turkish");
printf("Bir sayi giriniz: ");
 
fonk();

}

void fonk()
{
    int sayi,a,b,c=0,d;
   scanf("%d",&sayi);
    d=sayi;
    while(sayi > 0){        
        a = sayi % 10;
        b=pow(a,3);
        c=c+b;
        sayi = sayi / 10;
    }
    if(c==d)
    printf("%d is ARMSTRONG number.",c);
    else 
    printf("%d is not ARMSTRONG number!",d);
    }
