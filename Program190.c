
/*
  Accept the string from user and append 
  strcat is an inbuilt function for contatination
*/ 

#include<stdio.h>

// 1: Travel till end of dest
// 2: copy the data from src to dest
// 3: write '\0' at the end of dest

void strcatX(char *src, char *dest)
{
  //1: Travel till end of dest
  while(*dest != '\0')
  {
    dest++;
  }

  *dest= ' '; // <---------- white space
  dest++;

 //dest--; // no need to reverse the dest \0 will be overlapped by new data

  // 2: copy the data from src to dest
  while(*src != '\0')
  {
    *dest= *src;
    dest++;
    src++;
  }

  // 3: write '\0' at the end of dest
  *dest = '\0';
}

int main()
{
  char Arr[20];
  char Brr[20]= "Demo";

  printf("Enter String:\n");
  scanf("%[^'\n']s", Arr);

  strcatX(Arr,Brr);

  printf("String after Concatination is: %s\n", Brr);

  return 0;
}