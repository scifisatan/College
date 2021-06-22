//WAP to enter a no. and check whether it is even or odd.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n%2 == 0)
    {
        printf("It is even.");
    }
    else
    {
        printf("It is odd.");
    }
    
    return 0;
}