//  Calculate the Power of a number BY accepting two paramers from the user by using While loop:

#include<stdio.h>

#include<stdbool.h>

int CalculatePower(int iBase, int iPower)
{
   int iCnt= 0;
   int iResult= 1;
   iCnt= 1;

    while(iCnt <= iPower) // We cant reduce time complexity here
    {
        iResult= iResult * iBase;
        iCnt++;
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