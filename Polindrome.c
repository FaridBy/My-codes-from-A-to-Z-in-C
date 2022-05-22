//polindrom
#include <stdio.h>
#include <string.h>
void polindrom(char *a)
{ int num=0;
int j=strlen(a);
	for(int i=0;a[i]!='\0';i++)
	{
		
		if(a[i]!=a[j-1])
		{num++;
		}j--;
		
	}if(num==0)
	{
		printf("Text is polindrome.");
	}
	else printf("Text is not polindrome.");
}
  int main()
  {
  	char arr[100];
  	gets(arr);
  	polindrom(arr);
  	
  }
