/*
  Accept the two string from user and comapre the two strings/ check whether the two strings are same or not
  strcmp is an inbuilt function to comapre two strings. (Case Insensitive)
*/ 

#include<stdio.h>
#include<stdbool.h>

// str1  DeMo
// str2  dEMo

bool stricmpX(char *str1, char *str2)
{
  while((*str1 != '\0') && (*str2 != '\0'))
  {
    if(*str1 != *str2)    // Letters are different
    {
      if((*str1 >= 'a') && (*str1 <= 'z'))   // first letter is small
      {
        //   a         A
        if(*str1 != (*str2 + 32))
        {
          break;
        }
      }
      else if((*str1 >= 'A') && (*str1 <= 'Z'))  //first letter is capital
      {
        if(*str1 != (*str2 - 32))
        {
          break;
        }
      }
    }
    else
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

  bRet= stricmpX(Arr, Brr);  // strcmpX(100, 200)

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
