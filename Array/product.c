//product

#include <stdio.h>
int main()
{
    printf("This program finds out the product of given numbers.\n");
    int a[5];
    int prod = 1;
    for(int i=0;i<5;i++)
    {
        printf("Number %d: ",i+1);
        scanf("%d",&a[i]);
        prod *= a[i];
    }
    printf("The prod of numbers you entered is %d.",prod);
}