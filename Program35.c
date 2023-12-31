// 

#include<stdio.h>

unsigned long int CalculatePower(int iBase, int iPower)
{
   int iCnt= 0;
   unsigned long int iResult= 1;

    if((iBase< 0)|| (iPower<0))   // Filter
    {
        return 0;
    }

    for(iCnt = 1; iCnt <= iPower; iCnt++) // We cant reduce time complexity here
    {
        iResult= iResult * iBase;
    }
    return iResult;
}

int main()
{
    int iValue1= 0;
    int iValue2= 0;
    unsigned long int iRet= 0;

    printf("enter base: \n");
    scanf("%d", &iValue1);

    printf("enter power: \n");
    scanf("%d", &iValue2);

    iRet= CalculatePower(iValue1, iValue2);

    printf("Result is: %d\n", iRet);

    return 0;
}