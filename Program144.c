/*
******REDUCE the NUMBER of ITERATIONS********
Photo frame pattern(diagonal)

Time complexity of this progran is N square;

Input:: Rows= 4; Columns= 4;
Outut:

* * * #
* * #
* #
#


Use the concept of even odd
*/ 

#include<stdio.h>

int Display(int iRow, int iColumn)
{
    int i= 0;
    int j= 0;
    char ch= '\0';

    if(iRow != iColumn)
    {
      printf("invalid input\n");
      return 0;
    }

    for(i=iRow; i>=1; i--)
    {
      for(j= 1; j<=i; j++)
      {
        if(i==j)
        {
          printf("#\t");
        }
        else
        {
          printf("*\t");
        } 
      }
      printf("\n");
    }
      
}

int main()
{
  int iValue1= 0;
  int iValue2= 0; 

  printf("enter no of Rows:\n");
  scanf("%d", &iValue1);

  printf("enter no of Columns:\n");
  scanf("%d", &iValue2);

  Display(iValue1, iValue2);

  return 0;
}