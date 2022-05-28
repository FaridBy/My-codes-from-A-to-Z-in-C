#include <stdio.h>


int main() 
{
FILE *info;
info=fopen("information.txt","w");

int num;
	printf("How many teams will participate in the competition?\n");
	scanf("%d",&num);
	
	struct temas{
	
	char team_name[100];
	struct information{
	char name[100];
	char surname[100];
	int age;
}  player[2];
		
	}team[num];
    

for(int j=0;j<num;j++)
{ printf("%d. Enter the name of team:  ",j+1);
scanf("%s",&team[j].team_name);
printf("\n");
fflush(stdin);
for(int i=0;i<2;i++)
{
	printf("Enter %d. player of %s :\t",i+1,team[j].team_name);
	scanf("%s",&team[j].player[i].name);
	printf("Enter surname of %d. player of the team :\t",i+1);
	scanf("%s",&team[j].player[i]. surname);
		printf("Enter age of %d. player of the team:\t",i+1);
	scanf("%d",&team[j].player[i].age);
	printf("\n\n");
}
}

for(int i=0;i<num;i++)
{
	fprintf(info,"*%s team players information*\n",team[i].team_name);
	fprintf(info,"\n");
	for(int j=0;j<2;j++)
	{
		fprintf(info,"%d. Player\nName:%s\tSurname:%s\tAge:%d\n",j+1,team[i].player[j].name,team[i].player[j].surname,team[i].player[j].age);
	}fprintf(info,"\n\n");
}
fclose(info);

}
