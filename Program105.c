// Input: 7
// Outut: a 1 b 2 c 3 d 4 e 5 f 6 g 7

// Input: 3
// Outut: A B C 

#include<stdio.h>

void Display(int iNo)
{
    int iCnt= 0;
    char ch= '\0';     

    for(iCnt=1, ch= 'a'; iCnt<=iNo; iCnt++, ch++)
    {
      printf("%c\t %d\t", ch, iCnt); 
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