#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<conio.h>

struct number{ 
int one;
int two;
int three;
int four;
int five;
int six;
int sayi[8];
	
}part;



int main(){
	struct number one,two,three,four,five,six;
int say;
int n=0,kalan=0;
int sayi[8];
while(1){
printf("-999999 ile 999999 arasinda bir tamsayi giriniz : \n");
scanf("%d",&say);
if(say>-1000000 && say<1000000){
break;
}
}
if(say<0){
printf("eksi");
say=say*(-1);
}
while(1){
kalan=say%10;
sayi[n]=kalan;
say=say-kalan;
say=say/10;
n++;
if(say<10)
{
sayi[n]=say;
break;
}

}

if(sayi[0]==0){
printf("sifir\n");
}
int n1=n;
while(n1>=0){
if(n1==0){
switch(sayi[n1]){
case 1: printf("bir ");break;
case 2: printf("iki ");break;
case 3: printf("uc ");break;
case 4: printf("dort ");break;
case 5: printf("bes ");break;
case 6: printf("alti ");break;
case 7: printf("yedi ");break;
case 8: printf("sekiz ");break;
case 9: printf("dokuz ");break;

}
}
if(n1==1){
switch(sayi[n1]){
case 1: printf("on ");break;
case 2: printf("yirmi ");break;
case 3: printf("otuz ");break;
case 4: printf("kirk ");break;
case 5: printf("elli ");break;
case 6: printf("altmis ");break;
case 7: printf("yetmis ");break;
case 8: printf("seksan ");break;

case 9: printf("doksan ");break;
}
}
if(n1==2){
switch(sayi[n1]){
case 1: printf("yuz ");break;
case 2: printf("iki yuz ");break;
case 3: printf("uc yuz ");break;
case 4: printf("dort yuz ");break;
case 5: printf("bes yuz ");break;
case 6: printf("alti yuz ");break;
case 7: printf("yedi yuz ");break;
case 8: printf("sekiz yuz ");break;
case 9: printf("dokuz yuz ");break;
}
}
if(n1==3){
switch(sayi[n1]){
case 1: printf(" bin ");break;
case 2: printf("iki bin ");break;
case 3: printf("uc bin ");break;
case 4: printf("dort bin ");break;
case 5: printf("bes bin ");break;
case 6: printf("alti bin ");break;
case 7: printf("yedi bin ");break;
case 8: printf("sekiz bin ");break;
case 9: printf("dokuz bin ");break;

}
}
if(n1==4){

switch(sayi[n1]){
case 1: printf("on ");break;
case 2: printf("yirmi ");break;
case 3: printf("otuz ");break;
case 4: printf("kirk");break;
case 5: printf("elli ");break;
case 6: printf("altmis ");break;
case 7: printf("yetmis ");break;
case 8: printf("seksen ");break;
case 9: printf("doksan ");break;}}

if(n1==5){
switch(sayi[n1]){
case 1: printf("yuz ");break;
case 2: printf("iki yuz ");break;
case 3: printf("uc yuz ");break;
case 4: printf("dort yuz ");break;
case 5: printf("bes yuz ");break;
case 6: printf("alti yuz ");break;
case 7: printf("yedi yuz ");break;
case 8: printf("sekiz yuz ");break;
case 9: printf("dokuz yuz ");break;}}

n1--;
}
printf("\n");
system("PAUSE");

}   
