/*
  Accept the string from user and replace every capital letter with * and small with $
*/ 

#include<stdio.h>

#define ERR_NOTFOUND -1

void EditString(char *str)
{
  while(*str != '\0')
  {
    if((*str >= 'A') && (*str <= 'Z'))
    {
      *str = '*';
    }
    else if((*str >= 'a') && (*str <= 'z'))
    {
      *str = '$';
    }
    str++;
  }
}

int main()
{
  char Arr[50];
  char ch= '\0';
  int iRet= 0;

  printf("Enter String:\n");
  scanf("%[^'\n']s", Arr);

  EditString(Arr);

  printf("String after Editing is: %s\n", Arr);

  return 0;
}