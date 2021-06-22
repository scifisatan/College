//WAP to find a larger number among two numbers

#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    if (a ==b)
    {
        printf("The numbers are equal.");
    }
    
    else if (a > b)
    {
        printf("The first number is greater.");
    }
    else
    {
        printf("The second number is greater.");
    }
    
    return 0;
}