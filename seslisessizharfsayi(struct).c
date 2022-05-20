#include <stdio.h>
#include <string.h>
#include <locale.h>
struct string{
	char text[20];
	int length;
	int let1;
	int let2;
	int num;
	
};

struct string arr1[15]={"Azerbaijan",10,5,5,13
};
void fonk(struct string arr1)
{
int say=0;
gets(arr1.text);
for(int i=0;i<strlen(arr1.text);i++)
{ if(arr1.text[i]=='a' || arr1.text[i]=='o' || arr1.text[i]=='u' || arr1.text[i]=='e' || arr1.text[i]=='i' || arr1.text[i]=='y' || arr1.text[i]=='ö' || arr1.text[i]=='ü' )
say++;
}
printf("Sesli harf sayý: %d\n",say);
printf("Sessiz harf sayý: %d\n",strlen(arr1.text)-say);
}
int main()
{ setlocale(LC_ALL,"Turkish");
printf("Enter text:\n");	struct string ornek;
	fonk(ornek);
}

