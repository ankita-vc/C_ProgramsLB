/*
  Accept the string from user and convert every small character with capital character and vice versa
  strtoggle is the inbuilt function
*/ 

#include<stdio.h>

#define ERR_NOTFOUND -1

void strtoggleX(char *str)
{
  while(*str != '\0')
  {
    if((*str >= 'a') && (*str <= 'z'))
    {
      *str = *str - 32;
    }
    else if((*str >= 'A') && (*str <= 'Z'))
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

  strtoggleX(Arr);

  printf("String after Editing is: %s\n", Arr);

  return 0;
}