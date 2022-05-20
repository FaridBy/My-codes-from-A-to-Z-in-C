#include <stdio.h>
 #include <stdlib.h>
#include <locale.h>
#include <time.h>
// ortalama ve max deger bulma fonk yaz

void matris(int (*m2)[10],int a, int b )
{ int i,j;
for (i = 0; i < a; ++i)
    {
        for (j = 0; j < b; ++j)
        {
                printf(" %d", m2[i][j]);
        }
        printf("\n");
    }
}
    
void sort (int (*m1)[10],int m, int n, int hesap[3][5] )
{ int i,j,k,a;
  for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            for (k =(j + 1); k < n; ++k)
            {
                if (m1[j][i] > m1[k][i])
                {
                    a = m1[j][i];
                    m1[j][i] = m1[k][i];
                    m1[k][i] = a;
                }
            }
            hesap[2][i]+=m1[j][i];
        }
        hesap[0][i]=m1[0][i];
        hesap[1][i]=m1[4][i];
        hesap[2][i]/=5;
    }}
    
 main()
{
    static int array1[10][10], array2[10][10];
    int i, j, k, a, m, n, hesap[3][5]={0};
  srand(time(0));
   m=n=5;
    printf("Enter co-efficients of the matrix \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            array1[i][j]=rand() %100;
            array2[i][j] = array1[i][j];
        }
    }

    printf("The given matrix is \n");
    matris(array1,m,n);
  
 sort(array2,n,m,hesap);

    int max=0;
    printf("After arranging the columns in descending order \n");
   
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf("%d\t", array2[i][j]);
        }
        printf("\n");
    } 
    
    printf("\n\n");
   for(i=0;i<3;i++){
   		for(j=0;j<5;j++){
   			printf("%d\t",hesap[i][j]);
	   }printf("\n");
   }
}
