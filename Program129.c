/*
Photo frame pattern

Input:: Rows= 6; Columns= 6;
Output:

*  *  *  *  *  *
*              *
*              *
*              *
*              *
*  *  *  *  *  *

*/ 

#include<stdio.h>

int Display(int iRow, int iColumn)
{
    int i= 0;
    int j= 0;

    for(i=1; i<=iRow; i++)
    {
      for(j=1; j<=iColumn; j++)
      {
        if((i==1) || (i==iRow) || (j==1) || (j==iColumn))
        {
          printf("*");
        }
        else
        {
          printf(" ");
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