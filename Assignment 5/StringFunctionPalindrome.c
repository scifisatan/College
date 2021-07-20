#include <stdio.h>
#include <strings.h>

void palindrome();

void main()
{
    char str[50];
    printf("Enter a string: ");
    gets(str);
    palindrome(&str);
}

void palindrome(char string[50]){
    char word[50];
    strcpy(word, string);
    strrev(word);
    if(strcmp(word , string)== 0)
        printf("String is a palindrome");
    else
        printf("String is not a palindrome");
}