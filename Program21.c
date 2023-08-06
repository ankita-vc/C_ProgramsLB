// Take a input from user and display the factor of that number

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt= 0;

    for(iCnt=1; iCnt<= iNo; iCnt++)
    {
        printf("%d\n", iCnt);
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
