#include <stdio.h>>

int main()
{
    int a[5]={1,2,3,4,5};
    int *p = a;

    printf("--------------Normal Method------------");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d  ",a[i]);
        printf("%d",&a[i]);
    }
    printf("\n--------------Array Name Method------------");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d  ",*(a+i));
        printf("%d  ",a+i); 
    }

    printf("\n--------------Pointer Method------------");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d  ",*(p+i));
        printf("%d  ",p+i); 
    }

}