#include <stdio.h>

void swap();

void main()
{
    int a[2];
    int *p = a;
    printf("Enter two numbers: ");
    scanf("%d%d",&a[0],&a[1]);

    printf("The numbers before swapping: ");
    printf("\na=%d",a[0]);
    printf("\nb=%d",a[1]);

    swap(p);

    printf("\nThe numbers after swapping: ");
    printf("\na=%d",a[0]);
    printf("\nb=%d",a[1]);
}

void swap(int *x)
{
    int temp;
    temp = *(x);
    *(x) = *(x+1);
    *(x+1) = temp;


}

