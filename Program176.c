    /*
  Accept the string from user and replace the White spaces with uderscore
*/ 

#include<stdio.h>

void EditString(char *str)
{
  while(*str != '\0')
  {
    if(*str == ' ')
    {
      *str = '_';
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

/*
Without returning any value from helper function we can edit the original string 
Due to the concept of 'Call by Address'
*/