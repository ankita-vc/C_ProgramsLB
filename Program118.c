/*
Input:: Rows= 3; Columns= 5;
Outut:

 a  b  c  d  e
 a  b  c  d  e
 a  b  c  d  e

*/ 

#include<stdio.h>

void Display(int iRow, int iColumn)
{
    int i= 0;
    int j= 0;
    char ch= '\0';

    for(i=1; i<=iRow; i++)
    {
      for(j=1, ch= 'a'; j<=iColumn; j++, ch++)
      {
        printf("%c\t", ch);
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