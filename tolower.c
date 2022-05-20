#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
	char *arr,temp;
	arr=(char*)(malloc(sizeof(char)*100));
	printf("Kelimeyi dahil ediniz:");
	gets(arr);
for(int k=0;k<strlen(arr);k++)
{	for(int i=0;i<strlen(arr)-1;i++)
	{
		if(arr[i]>arr[i+1])
	{	temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;}
	}
}
printf("Alfabe sirasiyla dizilis: ");
	for(int j=0;j<strlen(arr);j++)
	{
		printf("%c",tolower(arr[j]));
	}
	free(arr);
}
