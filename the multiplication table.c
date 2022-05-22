#include <stdio.h>
int main()
{
	int array[10][10];
	for(int i=1;i<11;i++)
	{
		for(int j=1;j<11;j++)
		{
			array[i-1][j-1]=i*j;
			printf("%d\t",array[i-1][j-1]);
		}printf("\n");
	}
}
