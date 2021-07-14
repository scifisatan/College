//WAP to find the factorial using function
//with return type and arguement

#include <stdio.h>

int factorial();

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The factorial of given number is %d",factorial(n));

}

int factorial(int x)
{
    int i, fact=1;
    for (i=x;i>0;i--)
    {
        fact = fact * i;

    }
}