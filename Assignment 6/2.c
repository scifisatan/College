#include <stdio.h>
int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int *p = a;
    printf("--------------Normal Method------------");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\n%d  ",a[i][j]);
            printf("%d",&a[i][j]);
        }
        
    }
    
    printf("\n--------------Array Name Method------------");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\n%d  ",a +(i*3)+j);
            printf("%d",*(&a[0][0] +(i*3)+j));
            
        }
        
    }
    printf("\n--------------Pointer Method------------");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\n%d  ",p +(i*3)+j);
            printf("%d",*(p +(i*3)+j));
            
        }
        
    }

}

