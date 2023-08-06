// Display 1 to 5 numbers on screen.

#include<stdio.h>

int Display(int iNo)
{
    if(iNo < 0)   // Updator for negative input
    {
        iNo= -iNo;
    }
    
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d \n",iCnt);
    }
}

int main()
{
    int iValue= 0;

    printf("enter the Frequency:\n");
    scanf("%d", &iValue);

    Display(iValue);
    
    return 0;
}