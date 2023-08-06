/*
  Accept the string from user and convert every small character with capital character and vice versa
  strcpy is the inbuilt function
*/ 

#include<stdio.h>

#define ERR_NOTFOUND -1

void strcpyToggleX(char *src, char *dest)
{
  while(*src != '\0')
  {
    if((*src >= 'A') && (*src <= 'Z'))
    {
      *dest = *src + 32;
     
    }
    else if((*src >= 'a') && (*src <= 'z'))
    {
      *dest = *src - 32;
    }
    else   // This is for special symbols
    {
      *dest = *src;
    }
    dest++;
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

  strcpyToggleX(Arr,Brr);

  printf("Updated String is: %s\n", Brr);

  return 0;
}