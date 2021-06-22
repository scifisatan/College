//WAP to enter three no. and display the largest number.

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a,&b,&c);
    if (a>b && a>c)
{
        printf("First number is the greatest.");
    }
    else if (b>a && b>c)
    {
        printf("Second number is the greatest.");
    }
    else
    {
        printf("Third number is the greatest");
    }
    return 0;
}