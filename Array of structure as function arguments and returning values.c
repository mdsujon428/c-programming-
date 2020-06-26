
#include<stdio.h>
#include<string.h>
struct student{
    char name[25];
    int roll;
    int mark[3];
};

void info(struct student* s) // input function definition 
{
    for(int i=0;i<3;i++)
    {
    scanf("%s",(*(s+i)).name);
    scanf("%d",&(*(s+i)).roll);
    for(int j=0;j<3;j++)
    {
    scanf("%d",&(*(s+i)).mark[j]);
    }
    }
}

int main()
{   struct student s[3];
    info(s);
    for(int i=0;i<3;i++)
    {
    printf("\n\nINFORMATION OF STUDENT %d",i+1);
    printf("\nSTUDENT NAME IS : %s",s[i].name);
    printf("\nSTUDENT ROLL IS : %d",s[i].roll);
    for(int j=0;j<3;j++)
    {
    printf("\nSTUDENT SUBJECTS MARKS IS : %d",s[i].mark[j]);
    }
    }
    return 0;
}
