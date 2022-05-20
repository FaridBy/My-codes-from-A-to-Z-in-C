#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main()
{srand(time(NULL));
setlocale(LC_ALL,"Turkish");
	int a[50],x,i,j,k,b;
	printf("Dizinin aralýðýný giriniz:\n");
	scanf("%d%d",&x,&b);
	for(i=0;i<50;i++)
	{a[i]=rand()%(b-x+1)+x;
		printf("Dizinin %d. elemaný: %d\n",i+1,a[i]);
	}
	for(j=0;j<50;j++)
{ for(k=0;k<50;k++)
{if(a[j]<a[k])
{	
x=a[j];
	a[j]=a[k];
	a[k]=x;}

}
}
printf("\n\nDizinin Selection Sort ile sýralanmasý:");
for(i=0;i<50;i++)
printf("%d ",a[i]);
}

