/*
  Accept the string from user and make a copy of that string.
  strcpy is the inbuilt function
*/ 

#include<stdio.h>

void strcpyX(char *src, char *dest)
{
  while(*src != '\0')
  {
    *dest = *src;
    src++;
    dest++;
  }
  *dest = '\0';  // '\0' is Very much imortant for programer
}

int main()
{
  char Arr[50];
  char Brr[50];

  printf("Enter String:\n");
  scanf("%[^'\n']s", Arr);

  strcpyX(Arr,Brr);

  printf("String after Copy is: %s\n", Brr);

  return 0;
}