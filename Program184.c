/*
  Accept the string from user and copy only small characters to the other string.
  strcpy is the inbuilt function
*/ 

#include<stdio.h>

#define ERR_NOTFOUND -1

void strcpySmallX(char *src, char *dest)
{
  while(*src != '\0')
  {
    if((*src >= 'a') && (*src <= 'z'))
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

  strcpySmallX(Arr,Brr);

  printf("String after Copy is: %s\n", Brr);

  return 0;
}