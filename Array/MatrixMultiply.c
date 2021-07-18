
// C program to multiply two square matrices.
#include <stdio.h>

 
int main()
{
    int n;

    int res[50][50]; // To store result

    int mat1[50][50],mat2[50][50];
    printf("Enter the size of square matrix: \n");
    scanf("%d",&n);
    printf("\nEnter the first matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\nEnter the second matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    
    
    int i, j, k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            res[i][j] = 0;
            for (k = 0; k < n; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
    printf("\nResult matrix is \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", res[i][j]);
        printf("\n");
    }
 
    return 0;
}