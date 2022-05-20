#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void fonk(char *a,int *b,char harf);
int main()
{
	char *arr,let;
	int *arr2;
	arr2=(int*)(malloc(sizeof(int)*100));
	arr=(char*)(malloc(sizeof(char)*100));
		printf("Kelimeyi giriniz:\n");
	gets(arr);
	printf("Aranacak harfi giriniz:\n");
	scanf("%c",&let);
	fonk(arr,arr2,let);
}
void fonk(char *a,int *b,char harf){
	int x, n=0;

	for(int i=0;i<10;i++){
		if(harf==a[i]){	
			b[n]=i;
			n++;
		}
	}
for(x=0;x<n;x++){
	printf("%d ",b[x]);
}

}
