
/*
  Accept the string from user and convert every small character with capital character and vice versa
  strcpy is the inbuilt function
*/ 

#include<stdio.h>

#define ERR_NOTFOUND -1

void strcpyX(char *src, char *dest)
{
  while(*src != '\0')
  {
    *dest = *src;
    src++;
    dest++;
  }
  *dest = '\0';
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