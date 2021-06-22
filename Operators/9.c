//WAP to enter two numbers. 
//Make comparison between them with conditional operator. 
//If the first number is greater perform multiplication otherwise division.

#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a,&b);
    a = a>b ? a*b : b/a;
    printf("%d", a);
    return 0;
}