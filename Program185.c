/*
  Accept the string from user and copy only capital characters:
  strcpy is the inbuilt function
*/ 

#include<stdio.h>

#define ERR_NOTFOUND -1

void strcpyCapitalX(char *src, char *dest)
{
  while(*src != '\0')
  {
    if((*src >= 'A') && (*src <= 'Z'))
    {
      *dest = *src;
      dest++;
    }
    src++;
  }
  *dest = '\0';
}

int main()
{
  char Arr[50];
  char Brr[50];

  printf("Enter String:\n");
  scanf("%[^'\n']s", Arr);

  strcpyCapitalX(Arr,Brr);

  printf("Updated String is: %s\n", Brr);

  return 0;
}