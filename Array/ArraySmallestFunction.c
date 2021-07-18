#include <stdio.h>

int small();

int main(){
    int a[6];
    printf("Enter 5 numbers: \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The smallest number is: %d", small(a));
    
}

int small(int x[5])
{
    int small = x[0];
    for (int i=0;i<5;i++)
    {
        if (x[i] < small)
        {
            small = x[i];
        } 
    }
    return small;
}
