#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>


char let1(char *a,int i)//sesl harf
{
	i=rand()%8;
	return a[i];
}
char let2(char *b,int j)//sessiz harf
{
	j=rand()%23;
	return b[j];
}

int num(int *n)//rakam
{
	*n=rand()%9;
	return *n;
}
char spc(char *ch,int k)//özel
{
	k=rand()%13;
	return ch[k];
}
main()
{ setlocale(LC_ALL,"Turkish");srand(time(0));

	char x[10]={"ayoueiöü"};
	
int	i=rand()%8;
	
		
	char y[25]={"qwrtypsdfghjkl?zxcvbnmç"};
int	k=rand()%23;
	

	
	int num1;
	 char z[14]={"@!^+%&/(=?_-*"};
	 int j=rand()%13;	
	
	 for(int i=0;i<10;i++)
	 {printf("%c",let1(x,i));
	 
	 	for(int i=0;i<5;i++)
		printf("%c",let2(y,k));
	printf("%d",num(&num1));
	 printf("%c",spc(z,j));printf("\n");
	 }
	 
}
