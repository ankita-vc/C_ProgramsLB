/*
  Accept the string from user and count capital characters
*/ 

#include<stdio.h>

int strlenCapitalX(char *str)
{
  int iCount= 0;

  while(*str != '\0')
  {
    if((*str >= 'A') && (*str <= 'Z'))
    {
      iCount++;
    }
    str++;
  }
  return iCount;
}


int main()
{ 
  char Arr[10];

  printf("Enter string:\n");
  scanf("%[^'\n']s", &Arr);

  int iRet= strlenCapitalX(Arr);  // strlenX(Arr) array is internally accepts the address

  printf("no of capital characters are: %d\n", iRet);

  return 0;
}