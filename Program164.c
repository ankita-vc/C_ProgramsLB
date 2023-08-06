/*
  Accept the string from user and count digits
*/ 

#include<stdio.h>

int strlenDigitsX(char *str)
{
  int iCount= 0;

  while(*str != '\0')
  {
    if((*str >= '0') && (*str <= '9'))
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

  int iRet= strlenDigitsX(Arr);  // strlenX(Arr) array is internally accepts the address

  printf("no of Digits are: %d\n", iRet);

  return 0;
}