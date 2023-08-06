/*
******REDUCE the NUMBER of ITERATIONS********

Input:: Rows= 6; Columns= 6;
Outut:

   A
   A  B
   A  B  C
   A  B  C  D
   A  B  C  D  E
   A  B  C  D  E  F

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

    for(i=1; i<=iRow; i++)
    {
      for(j=1,ch='A'; j<=i; j++, ch++)
      {
        printf("%c\t",ch);
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