// Input: 7
// Outut: 7 6 5 4 3 2 1 

// Input: 3
// Outut: 3 2 1 

#include<stdio.h>

void Display(int iNo)
{
    int iCnt= 0;

    for(iCnt=iNo; iCnt>=1; iCnt--)
    {
      printf("%d\t",iCnt);
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