#include <stdio.h>
#include <math.h>
void main(){
    int a,arm=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    int num = a;
    int d = floor(log10(abs(a!=0?a:1)))+ 1; 
    while(a!=0){
        arm = arm + pow(a%10,d);
        a = a/10;}
    num==arm?printf("Armstrong"):printf("Not armstrong");}
