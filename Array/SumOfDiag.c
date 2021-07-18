#include <stdio.h>

int main()
{
    int a[50][50];
    int sum = 0,n;
    printf("Enter the size of square matrix: \n");
    scanf("%d",&n);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j||i+j==n-1)
            {
                sum = sum + a[i][j];
            }
        } 
    }
    printf("The required sum is %d",sum);

}