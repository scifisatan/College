//Recursive function to find sum of natural numbers

#include <stdio.h>

int sum();

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The sum of natural numbers till given number is %d",sum(n));

}

int sum(int x)
{
    if(x == 0)
    {
        return 0;
    }
    while(x!= 0)
    {
        return x + sum(x-1);
    }
}

