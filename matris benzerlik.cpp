#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{ srand(time(NULL));
int **a,f;
a=(int**)malloc(sizeof(int*)*10);
for(f=0;f<10;f++){
a[f]=(int*)malloc(sizeof(int*)*10);}
	int i,j,k,n=0,u=0,o=3,m=3,t; //1 ve 0 lardan 10x10 matris olu?turma
	for( i=0;i<10;i++)
	{
		for( j=0;j<10;j++)
		{
			a[i][j]=rand()%2;
			printf("%d    ",a[i][j]);
		} printf("\n\n");
	}
	//örnek matris
int max=0,z=1,p=0,sayac=0,b[3][3]={0,1,0,
             0,1,0,
			 1,1,1};
            
		for(k=0;k<8;k++)
		{
			for( t=0;t<8;t++)
			{
					for( i=0;i<3;i++)
			{
				for( j=0;j<3;j++)
			{if(b[i][j]==a[i+k][j+t])
             sayac++;	
			}
			}printf("%d. 3x3luk matriste ornek matrisimizle %d kadar ayni sayi var\n\n",z,sayac);z++;
if(sayac>max)
{
	max=sayac;

}
			 sayac=0; 
		}
		

}
printf("En fazla benzerlikte %d tane sayi aynidir ",max);
free(a);
}
