//WAP to enter two numbers and display the 
//largest number using ternary operator.

#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    a>b ? printf("The first number is greater.") : printf("The second number is greater.");

    return 0;
}
