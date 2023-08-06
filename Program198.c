/*
  Accept the two string from user and comapre the two strings/ check whether the two strings are same or not
  strcmp is an inbuilt function to comapre two strings.
*/ 

#include<stdio.h>
#include<stdbool.h>

bool strcmpX(char *str1, char *str2)
{
  for(; ((*str1 != '\0') && (*str2 != '\0') && (*str1 == *str2)) ; str1++, str2++); // semicolone is important

  return ((*str1 == '\0') && (*str2 =='\0'));
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