//sum and average

#include <stdio.h>
int main()
{
    printf("This program finds out the sum and average of given numbers.\n");
    int a[5];
    int sum = 0;
    for(int i=0;i<5;i++)
    {
        printf("Number %d: ",i+1);
        scanf("%d",&a[i]);
        sum += a[i];
    }
    printf("The sum of numbers you entered is %d.",sum);
    printf("The sum of you've entered is %d.",sum/5);
}