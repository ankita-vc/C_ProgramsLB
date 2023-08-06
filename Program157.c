/*
  Accept the string from user and display that string:
*/ 

#include<stdio.h>

int main()
{ 
  char Arr[20];

  printf("Enter your name:\n");
  scanf("%s", Arr);

  printf("Your name is: %s\n", Arr);

  return 0;
}