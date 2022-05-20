#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	int a[6]={1,2,3,4,5,6}, b[6]={1,2,3,4,5,6},i,j;
	int c[6][6];
	int x, y, z, t;
	srand(time(0));
for (i = 0; i < 6; i++){
	for (j = 0; j < 5; j++){
		c[i][j] = 0;
	}
}
printf("Atýlan zarlar: \n\n");
for (i = 0; i < 100; i++){
	x = rand()%6;
	y = rand()%6;
	z = a[x];
	t = b[y];
	c[z-1][t-1] += 1;
	printf("[%d,%d],",z,t); 
}
printf("\n\n");
printf("Zarlarýn atýþ sayýsý:\n\n");
for (i = 1; i <7; i++){
	for (j = 1; j <7; j++){
		printf("[%d, %d]--> %d\n",i,j,c[i-1][j-1]);
	}
}
return 0;
}
