//By Farid Bayramov
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>


//Let's start...

int main()
{
srand(time(NULL)); 

//Words
char a[10][100]={
{"university"},
{"computer"},
{"azerbaijan"},
{"math"},
{"football"},
{"actor"},
{"lovely"},
{"book"},
{"marmara"},
{"programming"}
};
printf("Let's start a game, GOOD LUCK!...\n");
printf("NOTE* If you enter a letter, which was entered before, you will lose!\n\n");
printf("WORD:     ");
int i=rand()%10,num=0;
int ch,length=strlen(a[i]),g=strlen(a[i]);

char ok[11]={3,3,3,3,3,3,3,3,3,3,3};

	   for(int v=0;v<length;v++)
{
	printf("_ ");
}
printf("\n\n\n");
   
int x=2*length; 
 printf("You have %d chances:\n",x);
	printf("Number of letters, which were not found in the word: %d\n\n\n ",g);
	int az=0;
	
	// Letter controle
for(int o=0;o<4*length;o++)

{ 

scanf("%s",&ch);
x--;
for(int l=0;l<length;l++)
{ 
     if(ch==a[i][l])
     {num++;g--;az++;
	 ok[l]=ch;} 
} 
for(int s=0;s<strlen(a[i]);s++){
printf("%c ",ok[s]);} //Printing letters,which were found


printf("\n");
printf("-There are %d of the letters you entered in the word.\n",num);
printf("*You have %d chances now:\n",x);
	printf("-Number of letters which were not found in the word: %d\n",g);
printf("-Number of letters which were found: %d\n\n\n",az);

num=0;
char us[10]; 
//Win or Lose
	if(g==0 || g<0 ){printf("You found all letters in the word! YOU WON!"); break;}
	if(x==0)
	
{printf("LAST CHANCE: Enter the WORD : "); 

scanf("%s",&us);
	if(us[0]!=a[i][0] || us[1]!=a[i][1] || us[2]!=a[i][2] || us[3]!=a[i][3]  )
{	printf("You Lost! The Word Was: %s",a[i]);
	}
	else printf("Congratulations! YOU found the WORD!");
;break;}
	
}
}
