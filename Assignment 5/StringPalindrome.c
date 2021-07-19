#include <stdio.h>

void main(void)
{
    char str[50];
    printf("Enter a string: ");
    gets(str);
    palindrome(str);
}

int palindrome(char str[])
{
    int len=0,i=0,flag=1;
    while(str[i]!='\0')
    {
        len++;
        i++;
    }
    int j=(len-1);
    for(i=0;i<len/2;i++)
    {
        if(str[j]!=str[i])
        {
            flag=0;
            break;
        }
        j--;
    }    
    if(flag==1)
        printf("String is a palindrome");
    else
        printf("String is not a palindrome");
}
