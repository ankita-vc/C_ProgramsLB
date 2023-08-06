
// Input: 5
// Outut: -5 -4 -3 -2 -1 0 1 2 3 4 5

#include<stdio.h>

void Display(int iNo)
{
    int iCnt= 0; 

    for(iCnt=-iNo; iCnt<=-1; iCnt++)  // iCnt<0;
    {
      printf("%d\t", iCnt); 
    }

    for(iCnt=0; iCnt<=iNo; iCnt++)   // iCnt=1;
    {
      printf("%d\t", iCnt);
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