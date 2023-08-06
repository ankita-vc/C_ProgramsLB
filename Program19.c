// Display numbers on screen by taking the input from user

#include<stdio.h>

int Display(int iNo)
{
    if(iNo < 0)  // Filter for negative input
    {
       printf("Error: Invalid Input\n");
       printf("Note: Please enter positive integer..\n");
        return;
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