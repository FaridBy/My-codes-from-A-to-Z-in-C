#include <stdio.h>
#include <stdlib.h>
int main()
{
char *dizi;
dizi=(char*)malloc(sizeof(char*)*10);
	int x,num;
	char a[3][3]={
	'A','D','G',
	'B','E','H',
	'C','F','I'};
	printf("Metin kac harfli?\n");
	scanf("%d",&x);
	printf("Sifrelenmis sayilari dahil ediniz\n");
	for(int i=0;i<x;i++)
	{
		scanf("%d",&num);
		dizi[i]=a[num/10-1][num%10-1];
		
	}
	for(int j=0;j<x;j++)
	{printf("%c",dizi[j]);}
	free(dizi);
}
