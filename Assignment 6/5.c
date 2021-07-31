#include <stdio.h>
#include <conio.h>

int large(int *p);

int main()
{
    int a[3][3];
    int *p=a;
    printf("Enter 9 numbers of matrix");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", (p + i*3 + j));
        }  
    }

    printf("The largest value is %d.", large(p));
    

}

int large(int *x)
{
    int temp = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(*(x + i*3 + j)>temp)
            {
                temp = *(x + i*3 + j);
        }
        }  
    }
    return temp;

}