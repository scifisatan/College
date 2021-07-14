//WAP to find the factorial using function
//with no return type and no arguement

#include <stdio.h>

int factorial();

int main()
{
    factorial();
}

int factorial( )
{
    int n, i, fact = 1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (i=n;i>0;i--)
    {
        fact = fact * i;
    }
    printf("the factorial of given number is %d",fact);

}