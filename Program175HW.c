
/*
  Accept the string from user and decide the small and capital characters independently
  Time Complexity of such problems is N;
*/ 

#include<stdio.h>

#define ERR_NOTFOUND -1

void Count(char *str)
{
  int iCnt1= 0;
  int iCnt2= 0;

  while(*str != '\0')
  {
    if((*str >= 'A') && (*str <= 'Z'))
    {
      iCnt1++;
      printf("Capital: %d\n", iCnt1);
    }

    if((*str >= 'a') && (*str <= 'z'))
    {
      iCnt2++;
      printf("small: %d\n", iCnt2);
    }
    str++;
  }
  
}

int main()
{
  char Arr[20];
  char ch= '\0';
  int iRet= 0;

  printf("Enter String:\n");
  scanf("%[^'\n']s", Arr);

  Count(Arr);

  return 0;
}