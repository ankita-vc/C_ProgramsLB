/*
Input:: Rows= 3; Columns= 5;
Outut:

 a a a a a
 b b b b b
 c c c c c

*/ 

#include<stdio.h>

void Display(int iRow, int iColumn)
{
    int i= 0;
    int j= 0;
    char ch= 'a';

    for(i=1; i<=iRow; i++)
    {
      for(j=1; j<=iColumn; j++)
      {
        printf("%c\t", ch);
      }
      ch++;
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