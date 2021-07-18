#include <stdio.h>

int read();
int sort();
int display();

int main(){
    int a[100];
    int num = read(a);
    sort(a,num);
    display(a,num);
    return 0;
}

int read(int x[])
{
    int n;
    printf("Enter the number of elements you want to enter: ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("Number %d: ",i+1);
        scanf("%d",&x[i]);
    }
    return n;
}

int sort(int x[], int n){
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (x[i]<x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }

        }
    }

}

int display(int x[], int n){
    printf("\n\nNumbers in ascending order: ");
    for (int i = 0;i<n;i++)
    {
        printf("%d ",x[i]);
    }

}