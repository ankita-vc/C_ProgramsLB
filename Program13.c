// Display "Jay Ganesh" 5 times on screen by accepting input from user with filter

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)  //Filter
    {
        printf("Please enter positive number..\n");
        //return;                                                                                                      
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

int main()
{
    int iValue= 0;

    printf("enter the frequency of Statement:\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}