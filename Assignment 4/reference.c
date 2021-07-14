//Call by reference

#include <stdio.h>

int sum();

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("The sun of given numbers is %d",sum(&a,&b));


}

int sum(int *x, int *y)
{
    return *x + *y;

}