/*
  Accept the string from user and count the charcters of string:
*/ 

#include<stdio.h>

int strlenX(char str[])
{
  
}

int main()
{ 
  char Arr[10];

  printf("Enter string:\n");
  scanf("%[^'\n']s", Arr);

  int iRet= strlenX(Arr);  // strlenX(100) array is internally accepts the address

  printf("Length of string is: %d\n", iRet);

  return 0;
}