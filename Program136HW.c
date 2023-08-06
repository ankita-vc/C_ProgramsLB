/*
Input:: Rows= 4; Columns= 4;
Outut:

   *  *  *  *
      *  *  *
         *  *
            *
*/ 

#include<stdio.h>

int Display(int iRow, int iColumn)
{
    int i= 0;
    int j= 0;

    if(iRow != iColumn)
    {
      printf("invalid input\n");
      return 0;
    }

    for(i=1; i<=iRow; i++)
    {
      for(j=1; j<=iColumn; j++)
      {
        if((i==j) || (i < j))  
        {
          printf("*\t");
        }
        else
        {
          printf(" \t");
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