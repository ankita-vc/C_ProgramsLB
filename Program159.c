/*
  Accept the string from user and display the length of that string:
*/ 

#include<stdio.h>
#include<string.h>

int main()
{ 
  char Arr[10];

  printf("Enter string:\n");
  scanf("%[^'\n']s", Arr);

  int iRet= strlen(Arr);

  printf("Length of string is: %d\n", iRet);

  return 0;
}