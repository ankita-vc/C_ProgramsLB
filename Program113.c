/*
Non Linear printing pattern:

Time complexity of this progran is N square.. if no of columns and rows are same;

Input:: Rows= 3; Columns= 5;
Outut:
 * * * * *
 * * * * *
 * * * * * 

*/ 
  
#include<stdio.h>

void Display(int iRow, int iColumn)
{
    int i= 0;
    int j= 0;
//       1     2       3
    for(i=1; i<=iRow; i++)  //Outer
    {
//        1      2         3
      for(j=1; j<=iColumn; j++)  // Inner
      {
        printf("*\t");// 4
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