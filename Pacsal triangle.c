#include <stdio.h>
int main()
{
	int n,j;
	printf("How many lines will the matrix have?\n");
	scanf("%d",&n);
	j=n-1;
	int array[n][n];
	for(int i=0;i<n;i++)
	{	array[i][i]=1;
			array[i][0]=1;
			for(int k=0;k<j;k++){printf(" ");
			}j--;	if(i!=0)printf("%d ",array[i][i]);
		for(int j=1;j<i;j++)
		{
			
		array[i][j]=array[i-1][j-1]+array[i-1][j];
	
		printf("%d ",array[i][j]);
		}	printf("%d",array[i][i]);printf("\n");
	}	
}
