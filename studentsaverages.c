#include <stdio.h>
struct information{
char name[10][120];
char surname[10][120];
int averages[10];
int stdnum[10][125];
};
int main()
{ int max=0,j=0;
struct information student;
printf("Enter names of students:\n");
for(int i=0;i<10;i++)
{printf("%d. student name:\t",i+1);
gets(student.name[i]);
}
printf("Enter surnames of students:\n");
for(int i=0;i<10;i++)
{printf("%d. student surname:\t",i+1);
gets(student.surname[i]);
}
printf("Enter student numbers of students:\n");
for(int i=0;i<10;i++)
{printf("%d. student number:\t",i+1);
scanf("%d",&student.stdnum[i]);
}
printf("Enter average of students:\n");
for(int i=0;i<10;i++)
{printf("%d. student average:\t",i+1);
scanf("%d",&student.averages[i]);
{ if (student.averages[i]>max)
{max=student.averages[i];
j=i;}
}
}
printf("\nThe best average is %d by %s %s.",max,student.name[j],student.surname[j]);
}
