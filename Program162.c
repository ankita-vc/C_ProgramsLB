/*
  Accept the string from user and count small characters
*/ 

#include<stdio.h>

int strlenSmallX(char *str)
{
  int iCount= 0;

  while(*str != '\0')
  {
    if((*str >= 'a') && (*str <= 'z'))
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

  int iRet= strlenSmallX(Arr);  // strlenX(Arr) array is internally accepts the address

  printf("no of small characters are: %d\n", iRet);

  return 0;
}