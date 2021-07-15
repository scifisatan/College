#include <stdio.h>

int main()
{
    printf("This program finds out the smallest number.\n");
    int a[5];
    int temp;
    for(int i=0;i<5;i++)
    {
        printf("Number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if (a[i]<a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

        }
    }
    printf("\n\nNumbers in ascending order: ");
    for (int i = 0;i<5;i++)
    {
        printf("%d ",a[i]);
    }

}