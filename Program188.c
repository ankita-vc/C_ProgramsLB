
/*
  Accept the string from user and reverse it
*/ 

#include<stdio.h>

void strcpyRevX(char *src, char *dest)
{
  int iLength= 0;

  while(*src != '\0')
  {
    src++;
    iLength++;
  }
  src--;

  for( ; iLength != 0; iLength--)
  {
    *dest= *src;
    src--;
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

  strcpyRevX(Arr,Brr);

  printf("String after Reversal is: %s\n", Brr);

  return 0;
}