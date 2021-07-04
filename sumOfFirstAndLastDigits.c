#include <stdio.h>
#include <math.h>
void main(){
int a;
printf("Enter a number: ");
scanf("%d",&a);
int d=floor(log10(abs(a!=0?a:1)))+1;
int p = pow(10,(d-1));
printf("sum = %d",(a/p)+(a%10));}
