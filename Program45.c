// Calculate the factorial of number by accepting the number from user (Backward)

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt= 0;
    int iFact= 1;
    iCnt = 1;

    while(iCnt <= iNo)   // iCnt> 0;
    {
        iFact = iFact * iCnt;
        iCnt++;
    }
    return iFact;
}

int main()
{   
    int iValue= 0;
    int iRet= 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    iRet= Factorial(iValue);

    printf("Result is : %d", iRet);

    return 0;
}
