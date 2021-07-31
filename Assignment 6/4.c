
#include <stdio.h>

void read();
void sort();
void display();

int main()
{
    int a[5];
    int *p = a;

    read(p);
    sort(p);
    display(p);

}

void read(int *x)
{
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",x+i);
    }
    
}

void sort(int *x)
{
    int temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j= i; j < 5; j++)
        {
            if(x[i]>x[j])
            {
                temp = *(x+i);
                *(x+i) = *(x+j);
                *(x+j) = temp;
            }
        }
        
    }
    

}

void display(int *x)
{
    printf("In ascending order: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",*(x+i));
    }
    

}

