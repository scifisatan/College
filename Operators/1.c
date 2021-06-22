//WAP to add two numbers given by user.

#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a,&b);
    a = a +b;
    printf("The sum of two numbers is: %d", a);
    return 0;
}
