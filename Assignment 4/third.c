//WAP to find the factorial using function
//with no return type but with arguement

#include <stdio.h>

int factorial();

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    factorial(n);


}

int factorial(int x)
{
    int i, fact =1;
    for(i = x;i>0;i--)
    {
        fact = fact * i;
    }
    printf("the factorial of given number is %d",fact);

}