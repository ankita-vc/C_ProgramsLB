/*
  Accept the string from user and convert every cpital character with small character
  strlwrX is the inbuilt function
*/ 

#include<stdio.h>

#define ERR_NOTFOUND -1

void strlwrX(char *str)
{
  while(*str != '\0')
  {
    if((*str >= 'A') && (*str <= 'Z'))
    {
      *str = *str + 32;
    }
    str++;
  }
}

int main()
{
  char Arr[50];
  char ch= '\0';
  int iRet= 0;

  printf("Enter String:\n");
  scanf("%[^'\n']s", Arr);

  strlwrX(Arr);

  printf("String after Editing is: %s\n", Arr);

  return 0;
}