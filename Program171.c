/*
  Accept the string and character from user and Check first occurance of that character in a string
*/ 

#include<stdio.h>

int FirstOccurance(char *str, char cValue)
{
  int iCnt= 1;
  int iPos= 0;

  while(*str != '\0')
  {
    if(*str == cValue)
    {
      iPos = iCnt;
      break;
    }
    str++;
    iCnt++;
  }
  return iPos;
}

int main()
{
  char Arr[20];
  char ch= '\0';
  int iRet= 0;

  printf("Enter String:\n");
  scanf("%[^'\n']s", Arr);

  printf("enter character:\n");
  scanf(" %c", &ch);

  iRet= FirstOccurance(Arr, ch);

  printf("First occurance of %c is at: %d\n", ch, iRet);

  return 0;
}