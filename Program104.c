// Input: 7
// Outut: A B C D E F G

// Input: 3
// Outut: A B C 

#include<stdio.h>

void Display(int iNo)
{
    int iCnt= 0;
    char ch= '\0';     //****

  //     1                   2         3
    for(iCnt=1, ch= 'A'; iCnt<=iNo; iCnt++, ch++)
    {
      printf("%c\t", ch); //4
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