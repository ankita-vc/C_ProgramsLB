/*
  Accept string from user and reverse the contents of string in place
  strrev is an inbulit function to reverse in place
*/ 

#include<stdio.h>

void strrevX(char *str)
{
  char *start = NULL;  // we can take *str in place of *start, here this apllication has padding of 8 bytes
  char *end = NULL;
  char temp= '\0';

  start= str;
  end= str;

  while(*end != '\0')
  {
    end++;
  } 
  end--;

  while(start < end)
  {
    temp = *start;
    *start = *end;
    *end = temp;

    start++;
    end--;
  }
}

int main()
{
  char Arr[20];

  printf("Enter the string:\n");
  scanf("%[^'\n']s", Arr);

  strrevX(Arr);

  printf("Reverse string is: %s\n", Arr);

  return 0;
}
