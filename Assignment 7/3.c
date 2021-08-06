#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

void sort(struct Student[5]);

int main()
{
    struct Student s[5];
    printf("\nEnter name, roll no and marks of 5 students\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter the data of Student %d:  ", i+1);
        scanf("%s%d%f", &s[i].name, &s[i].roll, &s[i].marks);
    }
    
    sort(s);
    printf("S.N.\tName\tRoll No.\tMarks");
    for (int i = 0; i < 5; i++)
    {
        
        printf("\n%d\t%s\t%d\t\t%f",i+1, s[i].name, s[i].roll, s[i].marks);
    }
    
}

void sort(struct Student s[5])
{
    struct Student temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(strcmp(s[i].name,s[j].name)<0)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
        
    }
    
}
