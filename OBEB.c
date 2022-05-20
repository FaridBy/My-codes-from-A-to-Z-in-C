#include <stdio.h>
 #include <locale.h> 
 int obeb(int num1, int num2); 
 int main() 
 { setlocale(LC_ALL,"Turkish"); 
 int num1, num2; 
 printf("pozitif iki tam sayı girin: ");
  scanf("%d %d", &num1, &num2);
   printf("%d ve %d sayısının OBEB'i %d.",num1, num2, obeb(num1,num2)); 
   return 0; }
    int obeb(int num1, int num2) 
	{ if (num2 != 0) 
	return obeb(num2, num1%num2); 
	else return num1; }
