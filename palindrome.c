#include <stdio.h>
int rev(int num, int re){
re=(re*10)+(num%10);
if(num%100!=0)return rev(num/10,re);
return re/10;}
void main(){
int n,re;
printf("Enter a number: ");
scanf("%d",&n);re=n;
re=rev(n,0)?printf("Palindrome."):printf("Not Palindrome");}
