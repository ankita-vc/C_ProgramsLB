
/*
  Accept the string from user and append 
  strncat is an inbuilt function for number of letters to be concatinated
*/ 

#include<stdio.h>

#define ERR_NOTFOUND -1

void strncpyX(char *src, char *dest, int iLength)
{
  while((*src != '\0') && (iLength != 0))
  {
    *dest = *src;
    src++;
    dest++;
    iLength--;
  }
  *dest = '\0';
}

int main()
{
  char Arr[50];
  char Brr[50];
  int iNo = 0;

  printf("Enter String:\n");
  scanf("%[^'\n']s", Arr);

  printf("Enter no. of charcters that you want to copy\n");
  scanf("%d", &iNo);

  strcpyX(Arr,Brr, iNo);

  printf("String after Copy is: %s\n", Brr);

  return 0;
}