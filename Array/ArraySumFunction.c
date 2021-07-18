#include <stdio.h>

int sum();

int main(){
    int a[6];
    printf("Enter 5 numbers: \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The required sum is: %d", sum(a));
    
}

int sum(int x[5])
{
    int sum = 0;
    for(int i=0;i<5;i++)
    {
        sum = sum + x[i];
    }
    return sum;
}
