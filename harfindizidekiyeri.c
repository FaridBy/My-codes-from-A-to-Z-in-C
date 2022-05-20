#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
void func(char *a,char harf);
int main()
{
	char *arr,let;
	arr=(char*)(malloc(sizeof(char)*10));
	printf("Kelimeyi giriniz:\n");
	gets(arr);
	printf("Aranacak harfi giriniz:\n");
	scanf("%c",&let);
func(arr,let);
free(arr);
}


void func(char*a, char harf)
{int j=0,x;
		for(int i=0;i<strlen(a);i++)
	{
		if(harf==a[i])
		{ if(j==0)
	{printf("Harf ilk kez %d. indiste bulundu\n",i);}	
			j++;	}
	}
	printf("Kelimede %c harfinden %d tane var.",harf,j);
}
