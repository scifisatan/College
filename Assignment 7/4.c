#include <stdio.h>

struct date
{
    int date;
    int month;
    int year;
};

struct student
{
    char name[50];
    int roll;
    struct date dob;
};

void main()
{
    struct student s[5];
     printf("\nEnter name, roll no and date of birth (yyyy/mm/dd) of 5 students\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter the data of Student %d:  ", i+1);
        scanf("%s%d%d%d%d", &s[i].name, &s[i].roll, &s[i].dob.year, &s[i].dob.month, &s[i].dob.date);
    }
    printf("S.N.\tName\tRoll No.\tDOB");
    for (int i = 0; i < 5; i++)
    {
        
        printf("\n%d\t%s\t%d\t%d-%d-%d",i+1, s[i].name, s[i].roll,  s[i].dob.year, s[i].dob.month, s[i].dob.date);
    }
}