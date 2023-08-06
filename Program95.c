// Problems on  Pattern printing  (the rule of printf function in helper function is exceptional:) 

// Input: 7
// Outut: * * * * * * * 

// Input: 3
// Outut: * * *

#include<stdio.h>

void Display(int iNo)
{
    int iCnt= 0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
      printf("* \t");
    }
    printf("\n");
}

int main()
{
  int iFrequency= 0;

  printf("enter the Frequency of Symbol:\n");
  scanf("%d", &iFrequency);

  Display(iFrequency);

  return 0;
}