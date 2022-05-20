#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random(int *arr[],int min,int max,int num,int size)
{ 

for(int i=0;i<size;i++)
{ for(int j=0;j<size;j++)
{
	num=rand()%(max-min)+min;
	arr[i][j]=num;
	printf("%d\t",arr[i][j]);
}printf("\n");
}

}
int maxfind(int *arr[],int size)
{ int max=arr[0][0],maximums[size];
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(arr[i][j]>max)
			max=arr[i][j];
		}maximums[i]=max;max=0;
}for(int i=0;i<size;i++)
 {printf("%d ",maximums[i]);
 }
	}
int main()

{srand(time(NULL));
	int minn,maxx,numm,sizee;
	printf("Matrisin boyutun belirleyin:\t");
scanf("%d",&sizee);
int **arrr;
arrr=(int**)(malloc(sizeof(int)*sizee));
for(int i=0;i<sizee;i++)
{
	arrr[i]=(int*)(malloc(sizeof(int)*sizee));
}
printf("Matrisin elemanlari hangi aralikda olsun?\n From:\t");
scanf("%d",&minn);
printf(" To:\t");
scanf("%d",&maxx);
printf("\nMatrix:\n");
 random(arrr, minn,maxx, numm, sizee);
 printf("Maximums array:\n");
 maxfind(arrr,sizee);
 
}
