#include <stdio.h>
#include <conio.h>

int palindrome(char *p);

int main()
{
  char str[20];
  char *p;
  printf("Enter a string\n");
  gets(str);
  p = str;
  palindrome(p);

  return 0;
}

int palindrome(char *p)
{
  int len = 0, i = 0, flag = 0;
  while (*(p + i) != '\0')
  {
    len++;
    i++;
  }
  int j = (len - 1);
  for (i = 0; i < len; i++)
  {
    if (*(p + i) != *(p + j))
    {
      flag = 1;
      break;
    }
    j--;
  }
  if (flag == 1)
  {
    printf("String is not a palindrome");
  }
  else
  {
    printf("String is a palindrome");
  }
}