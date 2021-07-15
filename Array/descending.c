#include <stdio.h>

int main()
{
    int a[50];
    int n;
    printf("\nThis program sorts number in descending order.\n");
    printf("Enter the amount of numbers you want to sort: ");
    scanf("%d",&n);
    int temp;
    for(int i=0;i<n;i++)
    {
        printf("Number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

        }
    }
    printf("\nNumbers in descending order: ");
    for (int i = 0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}