/*

Input:: Rows= 4; Columns= 5;
Outut:

 # # # # #
 * * * * *
 # # # # #
 * * * * *

Use the concept of even odd
*/ 

#include<stdio.h>

void Display(int iRow, int iColumn)
{
    int i= 0;
    int j= 0;
    char Arr[2]= {'*','#'}; // even, odd

    for(i=1; i<=iRow; i++)
    {
      for(j=1; j<=iColumn; j++)
      {
        printf("%c\t", Arr[(i%2)]);
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