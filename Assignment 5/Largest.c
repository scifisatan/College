#include <stdio.h>

int large();

int main(){
    int a[6];
    printf("Enter 5 numbers: \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The largest number is: %d", large(a));
    
}

int large(int x[5])
{
    int large = 0;
    for (int i=0;i<5;i++)
    {
        if (x[i] > large)
        {
            large = x[i];
        } 
    }
    return large;
}
