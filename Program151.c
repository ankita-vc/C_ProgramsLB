/*
  Display the ASCII values of the characters:
*/ 

#include<stdio.h>

int main()
{
  char ch1= 'a';
  char ch2= 'z';

  char ch3= 'A';
  char ch4= 'Z';

  char ch5= '0'; // it is the digit but treated as character
  char ch6= '9';

  printf("Charcter is %c with ASCII value %d\n", ch1,ch1);
  printf("Charcter is %c with ASCII value %d\n", ch2,ch2);

  printf("Charcter is %c with ASCII value %d\n", ch3,ch3);
  printf("Charcter is %c with ASCII value %d\n", ch4,ch4);

  printf("Charcter is %c with ASCII value %d\n", ch5,ch5);
  printf("Charcter is %c with ASCII value %d\n", ch6,ch6);

  return 0;
}