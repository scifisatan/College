#include <stdio.h>
int rev(int num, int re){
re=(re*10)+(num%10);
if(num%100!=0)return rev(num/10,re);
return re/10;}
void main(){
int n;
printf("Enter a number: ");
scanf("%d",&n);
printf("%d",rev(n,0));}
