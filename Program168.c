/*
  Accept the string from user and a character and count the frequency of that character
*/ 

#include<stdio.h>
#include<stdbool.h>

int CountChar(char *str, char cValue)
{
  int iCount= 0;

  while(*str != '\0')
  {
    if(*str == cValue)
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
  char ch= '\0';
  int iRet= 0;

  printf("Enter string:\n");
  scanf("%[^'\n']s", Arr);

  printf("Enter character:\n");
  scanf("%c", &ch);

  iRet= CountChar(Arr, ch);  

  printf("number of occurances are: %d\n", iRet);

  return 0;
}