/*
  Accept the string from user and convert every small character with capital character and vice versa
  strtoggle is the inbuilt function
*/ 

#include<stdio.h>

#define ERR_NOTFOUND -1

void strtoggle(char *str)
{
  int Gap= 'a' - 'A';

  while(*str != '\0')
  {
    if((*str >= 'a') && (*str <= 'z'))
    {
      *str = *str - Gap;
    }
    else if((*str >= 'A') && (*str <= 'Z'))
    {
      *str = *str + Gap;
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

  strtoggle(Arr);

  printf("String after Editing is: %s\n", Arr);

  return 0;
}