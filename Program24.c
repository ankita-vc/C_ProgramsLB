// Take a input from user and display the factor of that number

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)   // O(N/2)
    {
        if((iNo % iCnt)==0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue= 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return 0;
}

// Time complexity can be reduced with loop condition(iNo/2) and loop displacement(iCnt+2)