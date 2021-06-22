//Any character is entered through the keyboard. 
//WAP to determine whether the character entered is 
//capital letter, a small letter, a digits or special symbols.

#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (c>=65 && c<=90)
    {
        printf("This is an uppercase character.");
    }
    else if (c>=97 && c<=122)
    {
        printf("This is a lowercase character.");
    }
    else if (c>=48 && c<=57)
    {
        printf("This is a digit.");
    }
    else
    {
        printf("It is a symbol.");
    }
    return 0;
}