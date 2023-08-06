
/*
  Accept the string from user and append 
  strncat is an inbuilt function for number of letters to be concatinated
*/ 

#include<stdio.h>

void strncatX(char *src, char *dest, int iLength)
{
  //1: Travel till end of dest
  while(*dest != '\0')
  {
    dest++;
  }

  // 2: copy the data from src to dest
  while((*src != '\0') && (iLength != 0))  // <---------------
  {
    *dest= *src;
    dest++;
    src++;

    iLength--;
  }
  // 3: write '\0' at the end of dest
  *dest = '\0';
}

int main()
{
  char Arr[20];
  char Brr[20]= "Demo";
  int iNo= 0;

  printf("Enter String:\n");
  scanf("%[^'\n']s", Arr);

  printf("enter the num ber of letters that you want to concate:\n");
  scanf("%d", &iNo);

  strncatX(Arr,Brr, iNo);

  printf("String after Concatination is: %s\n", Brr);

  return 0;
}