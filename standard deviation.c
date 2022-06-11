#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <math.h>

int main()
{
int n;
printf("Please Enter the size:\t");
scanf("%d",&n);
	int a[n],x;
	float sum=0,sum2=0;
for(int i=0;i<n;i++)
{printf("%d. Element of your array:\t",i+1);
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("Sum=\t%0.2f\n",sum);
printf("Average= %0.2f\n",sum/(n));
for(int j=0;j<n;j++)
{
	sum2=sum2+pow(sum/(n)-a[j],2);
}
printf("Standard deviation= %0.2f",sqrt(sum2/(n-1)));

}
