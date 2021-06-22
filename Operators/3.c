//WAP to enter numbers and check whether 
//they are exactly equal or not. 

#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    if (a == b)
    {
        printf("The numbers are equal.");
    }
    else
    {
        printf("The numbers are different.");
    }
    
    return 0;
}