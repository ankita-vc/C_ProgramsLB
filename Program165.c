/*
  Accept the string from user and count vowels characters
*/ 

#include<stdio.h>

int strlenVowelsX(char *str)
{
  int iCount= 0;

  while(*str != '\0')
  {
    if((*str=='A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') || (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
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

  int iRet= strlenVowelsX(Arr);  // strlenX(Arr) array is internally accepts the address

  printf("no of Vowels are: %d\n", iRet);

  return 0;
}