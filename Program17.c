// Display 1 to 5 numbers on screen.

#include<stdio.h>

int Display()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d \n",iCnt);
    }
}

int main()
{
    Display();
    
    return 0;
}