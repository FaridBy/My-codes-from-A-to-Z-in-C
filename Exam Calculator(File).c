//170421993-Farid Bayramov

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct student{
int no[10];
int answers[10][20];
};

struct result{
int no[10];
int score[10];
};


int main()
{srand(time(NULL));
FILE *file;
file=fopen("example.txt","w");

    struct student std;
    struct result result1;
    int answer_key[20]={1,2,4,3,2,1,3,4,2,1,2,3,1,4,1,2,3,2,1,4};
    int i,j;
    int correct,incorrect,not_answered;

printf("Welcome to Exam Calculator!\n0-Not answered\n1-A\n2-B\n3-C\n4-D\n\nCorrect answers: 5 point\tIncorrect answers:-1 point\n\n\n");



    for(j=0;j<10;j++)
    {std.no[j]=rand()%1000+1000;
        printf("%d. student no: %d\n",j+1,std.no[j]);
        
        correct=incorrect=not_answered=0;
      
        printf("Answers:");
        for(i=0;i<20;i++)
        {
            scanf("%d",&std.answers[j][i]);
            if(answer_key[i]==std.answers[j][i])
            {
                correct++;
            }
            else if(std.answers[j][i] ==0)
            {
                not_answered++;
            }
            else incorrect++;
        }
        result1.no[j]=std.no[j]; result1.score[j]=correct*5-incorrect;
        
       
    }

    for(j=0;j<10;j++)
    {
       fprintf(file,"Student No: %d\tCorrect: %d\tIncorrect: %d\tEmpty: %d\tScore: %d\n",std.no[j],correct,incorrect,not_answered,result1.score[j]);

    }

    return 0;
    fclose(file);
}
