/*
  Accept the string from user and count white spaces
*/ 

#include<stdio.h>

int strlenSpaceX(char *str)
{
  int iCount= 0;

  while(*str != '\0')
  {
    if(*str== ' ')
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

  int iRet= strlenSpaceX(Arr);  // strlenX(Arr) array is internally accepts the address

  printf("no of Spacebars are: %d\n", iRet);

  return 0;
}