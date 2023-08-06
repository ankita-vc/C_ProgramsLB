/*
  Accept the two string from user and comapre the two strings/ check whether the two strings are same or not
  strcmp is an inbuilt function to comapre two strings.
*/ 

#include<stdio.h>
#include<stdbool.h>

bool strcmpX(char *str1, char *str2)
{
  while((*str1 != '\0') && (*str2 != '\0'))
  {
    if(*str1 != *str2)
    {
      break;
    }
    str1++;
    str2++;
  }

  if((*str1 == '\0') && (*str2 =='\0'))
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  char Arr[20];
  char Brr[20];
  bool bRet= false;

  printf("Enter the First string:\n");
  scanf("%[^'\n']s", Arr);

  printf("Enter the Second string:\n");
  scanf(" %[^'\n']s", Brr);

  bRet= strcmpX(Arr, Brr);  // strcmpX(100, 200)

  if(bRet == true)
  {
    printf("both the strings are identical\n");
  }
  else
  {
    printf("both the strings are different\n");
  }

  return 0;
}