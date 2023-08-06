// Accept the two numbers from user as a base and power and and calculate the power.

#include<stdio.h>

int CalculatePower(int iBase, int iPower)
{
   int iCnt= 0;
   int iResult= 1;

    for(iCnt = 1; iCnt <= iPower; iCnt++)
    {
        iResult= iResult * iBase;
    }
    return iResult;
}

int main()
{
    int iValue1= 0;
    int iValue2= 0;
    int iRet= 0;

    printf("enter base: \n");
    scanf("%d", &iValue1);

    printf("enter power: \n");
    scanf("%d", &iValue2);

    iRet= CalculatePower(iValue1, iValue2);

    printf("Result is: %d\n", iRet);

    return 0;
}