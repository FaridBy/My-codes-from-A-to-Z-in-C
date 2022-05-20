#include <stdio.h>
#include <stdlib.h>
void toplama(float *x,int num)
{int i;
float sum_real=0,sum_img=0;
for( i=1;i<num+1;i++)
{
sum_real=sum_real+x[2*i-1];
sum_img=sum_img+x[2*i];
}
if (sum_img>0)
printf("Toplam = %0.2f+%0.2fI",sum_real,sum_img);
else
printf("Toplam = %0.2f%0.2fI",sum_real,sum_img);
}

int main() {
	
int i;
float reall,imag,*arr,say;
printf("Kac tane karmasik sayi toplanacak?\n");
scanf("%f",&say);
arr=(float*)(malloc(sizeof(float)*say));
for( i=1;i<say+1;i++)
{printf("Enter real part of complex number %d:\t",i);
scanf("%f",&arr[2*i-1]);
printf("Enter imaginary part of complex number %d:\t",i);
scanf("%f",&arr[2*i]);
if(arr[2*i]>0)
printf("Entered number:\t%0.2f+%0.2fI\n",arr[2*i-1],arr[2*i]);
else
printf("Entered number:\t%0.2f%0.2fI\n",arr[2*i-1],arr[2*i]);
}
toplama(arr,say);

free(arr);

return 0;
}
