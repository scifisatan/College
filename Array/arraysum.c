#include <stdio.h>

int main(){
    int a[3][3];
    int sum = 0;
    printf("Enter any 9 numbers: \n");
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
        for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum += a[i][j];
        } 
    }
    printf("The required sum is %d",sum);
}

