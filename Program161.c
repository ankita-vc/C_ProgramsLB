/*
  Accept the string from user and count the charcters of string:
*/ 

#include<stdio.h>

int strlenX(char *str)
{
  int iCount= 0;
   while(*str !='\0')
   {
    iCount++; 
    str++;
   }
   return iCount;
}

int main()
{ 
  char Arr[10];

  printf("Enter string:\n");
  scanf("%[^'\n']s", Arr);

  int iRet= strlenX(Arr);  // strlenX(Arr) array is internally accepts the address

  printf("Length of string is: %d\n", iRet);

  return 0;
}