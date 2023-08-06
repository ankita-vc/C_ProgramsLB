/*
  Accept the string from user and count the number of z from that string
*/ 

#include<stdio.h>

int strlenCountX(char *str)
{
  int iCount= 0;

  while(*str != '\0')
  {
    if(*str== 'z')
    {
      iCount++;
    }
    str++;
  }
  return iCount;
}

int main()
{ 
  char Arr[60];

  printf("Enter string:\n");
  scanf("%[^'\n']s", &Arr);

  int iRet= strlenCountX(Arr);  // strlenX(Arr) array is internally accepts the address

  printf("no of z are: %d\n", iRet);

  return 0;
}