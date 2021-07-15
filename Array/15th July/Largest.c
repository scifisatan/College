#include <stdio.h>
int main()
{
    printf("This program finds out the larges number.\n");
    int a[5];
    for(int i=0;i<5;i++)
    {
        printf("Number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    int large = a[0];
    for (int i=0;i<5;i++)
    {
        if (a[i] > large)
        {
            large = a[i];
        } 
    }
    printf("The smallest number you've entered is %d.",large);
}