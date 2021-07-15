#include <stdio.h>
int main()
{
    printf("This program finds out the smallest number.\n");
    int a[5];
    for(int i=0;i<5;i++)
    {
        printf("Number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    int small = a[0];
    for (int i=0;i<5;i++)
    {
        if (a[i] < small)
        {
            small = a[i];
        } 
    }
    printf("The smallest number you've entered is %d.",small);
}