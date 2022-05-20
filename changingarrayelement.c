#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
int replace( char *s, char a, char b)
{ int n;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==a)
		{n++;
			s[i]=b;
		}
	} return n;
}
int main()
{
	char text[100],let1,let2;

	printf("Metni giriniz:\n");
	gets(text);
printf("Degisilecek ve degistirilecek harfleri sirasiyla giriniz:\n ");
let1=getchar();
let2=getchar();
	replace(text,let1,let2);
	printf("Degistirilen karakter sayisi: ");
	printf("%d\n",replace(text,let1,let2));
	printf("Degistirilen metin: ");
	printf("%s\n",text);


}
