//use goto main, change the view,use fflush(stdin) for the bugs
// program can't show the list second time ' build it
// make two choices for the sorting- Sort By ID and sort by Saving
// MAke gropus like friends or family and etc.
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

void readfromfile(FILE* a)
{
	char ch;
	do {
		ch=fgetc(a);
		printf("%c",ch);
		
	}while(!feof(a));
};


void del();
/* Bir  2 boyutlu dizi tanimla ve delete seciminde choice kismi yarat
 eger dizdeki adin ilk 2 herfi choice de girilen adin ilk 2 herfine braber olarsa o adi 0 a esitle ve sonra da if num a esit deyilse save ele de */
void search();// del kismindaki kimi dizi yontemi, ilk 2 herfler esit oldugda yazdiririg istenilen seyi that is all
void edit();// del kismindakiyla ayni sadece 0 a deyil edit olunbacag seye esitlenib save edilmelidir

struct contact{
		char name[15];
		char surname[15];
		char number[20];
	};//Contacts details
	
int main()
{
main:

    system("cls");

 int num=0;
    time_t now = time(&now);
    struct tm *ptm = gmtime(&now);
    printf("UTC time: %s\n\n\n", asctime(ptm));//time
    
int choice;
int choice2;
int choice3;
int choice4;
int i,j,k;
system("COLOR 2");//system color changing
 FILE *MyContact;//declaring file
 MyContact=fopen("Contacts.txt","a+");
char add[50]={"  Welcome To Contact App!  "};
char ch;
	struct contact person[100];
	printf("\t\t\t\t\t\t");
	for( i=0;i<20;i++)
      {
      printf("\xDB");
	   Sleep(20);
	  }	
		for( j=0;j<27;j++)
		{
		printf("%c",add[j]);
		Sleep(40);
		}
	
		for( k=0;k<20;k++)
      {printf("\xDB"); 
        Sleep(20);
        }	end:
        printf("\n\n\n\t\t\t\t\t\tMenu\n\t\t\t\t\t\t");
		printf("1.Add new contact\n\t\t\t\t\t\t");
		printf("2.Delete any contact\n\t\t\t\t\t\t");
		printf("3.Edit contact\n\t\t\t\t\t\t");
		printf("4.Search for contacts\n\t\t\t\t\t\t");
	    printf("5.Contacts List\n\t\t\t\t\t\t");	
	    printf("6.Exit");
        
        printf("\n\n\t\t\t\t\t\t\t\tPlease make your choice(1-2-3-4-5) ...\n\n\t\t\t\t\t\tYour choice is:\t");
		do{  
		scanf("%d",&choice);
      switch(choice)
	  {
	  	case 1: system("cls"); { printf("\t\t\t\t\t\tEnter the contact name and surname:\t");
		   scanf("%s %s",&person[num].name,&person[num].surname);
		  printf("\t\t\t\t\t\tEnter %s %s's number(with country code) please:\t",person[num].name,person[num].surname); 
		  scanf("%s",&person[num].number);
		  fprintf(MyContact,"%s %s: +%s\n",person[num].name,person[num].surname,person[num].number);  num++;
		  printf("\t\t\t\t\t\tContact is succesfully saved!\n"); 
		   printf("\n\t\t\t\t\t\tPlease enter 1 for back to menu or enter 2 for exit:\t");scanf("%d",&choice2);
		   if(choice2==1)
		   {
system("cls");	goto end;
		   }
		   else {
		   	choice=6;
		   } } break;
		   case 2: system("cls"); printf("\n\n \xDB Contacts List \xDB\n  ");printf("\n"); readfromfile(MyContact);printf("\n\n Enter the name of contact, you want to delete:\t") ;break;
		   case 3: system("cls"); printf("\n\n \xDB Contacts List \xDB\n  ");printf("\n"); readfromfile(MyContact);printf("\n\n Enter the name of contact, you want to edit:\t") ;break;
		   case 4: printf("\n\t\t\t\t\t\tThis part is making...\n\t\t\t\t\t\t\t\tPlease make your choice(1-2-3-4-5) ...\n\t\t\t\t\t\tYour choice is:\t");break;
		   case 5: {system("cls"); printf("\n\n \xDB Contacts List \xDB\n  ");printf("\n"); readfromfile(MyContact); printf("\n\t\t\t\t\t\tPlease enter 1 for back to menu or enter 2 for exit:\t");
		   scanf("%d",&choice3);
		   if(choice3==1)
		   {
system("cls"); goto end;
		   } else {
		   	choice=6;
		   } } break;
		    
	  	
		}  
		}while(choice!=6);
		 
}
