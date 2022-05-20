#include <stdio.h>
#include <string.h>
#include <locale.h>
char buyukunlu();//buyukunlu uyumu fonksiyonu
char kucukunlu();//kucukunlu uyumu fonksiyonu
 main()
{setlocale(LC_ALL,"Turkish");buyukunlu();
kucukunlu();
}
char buyukunlu()       //Buyukunlu fonksiyonu controlling...
{
	
char word[50];
      int length,i,a=0,b=0;
      printf("Bir kelime girin: ");
      gets(word);
      length=strlen(word);
      for(i=0;i<length;i++){
if(word[i]=='a'||word[i]=='o'
||word[i]=='u'||word[i]=='ý' ||word[i]=='U' ||word[i]=='A' ||word[i]=='I' ||word[i]=='O'){
        a++; }
       if(word[i]=='e'||word[i]=='i'
||word[i]=='ö'||word[i]=='ü' || word[i]=='E'|| word[i]=='Ý'|| word[i]=='Ö'|| word[i]=='Ü'){
        b++; }  }
   if(a==0||b==0){
  printf("Girdiðiniz Kelime Büyük Ünlü Uyumuna Uyuyor.\n");}
   else{
    printf("Girdiðiniz Kelime Buyuk Ünlü Uyumuna Uymuyor.\n");}
    
}
char kucukunlu()   //Buyukunlu fonksiyonu controlling...
{
	char word[50];
      int length,i,a=0,b=0;
      length=strlen(word);
      for(i=0;i<length;i++){
if(word[i]=='ü'||word[i]=='o'
||word[i]=='u'||word[i]=='ö' ||word[i]=='Ö' ||word[i]=='Ü' ||word[i]=='U' ||word[i]=='O'){
        a++; }
       if(word[i]=='e'||word[i]=='a'
||word[i]=='i'||word[i]=='ý'
||word[i]=='E' ||word[i]=='Ý' ||word[i]=='I' ||word[i]=='A'){
        b++; }  }
   if(a==0||b==0){
  printf("Girdiðiniz Kelime Küçük Ünlü Uyumuna Uyuyor.");}
   else{
    printf("Girdiðiniz Kelime Küçük Ünlü Uyumuna Uymuyor.");}
}
