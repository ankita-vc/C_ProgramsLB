/*
  Accept the string from user and display that string:
*/ 

#include<stdio.h>

int main()
{ 
  char Arr[40];

  printf("Enter your name:\n");
  scanf("%[^'\n']s", Arr);  // special case scanf

  printf("Your name is: %s\n", Arr);

  return 0;
}