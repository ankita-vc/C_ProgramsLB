// Calculate the factorial of number by accepting the number from user (Backward)

#include<stdio.h>

typedef unsigned long int ULONG;

ULONG Factorial(int iNo)
{
    int iCnt= 0;
    ULONG iFact= 1;

    for(iCnt = iNo; iCnt >= 1; iCnt--)   // iCnt> 0;
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{   
    int iValue= 0;
    ULONG iRet= 0;

    printf("Enter the number:\n");
    scanf("%d\n", &iValue);

    iRet= Factorial(iValue);

    printf("Result is : %d\n", iRet);

    return 0;
}
