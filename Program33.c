// 

#include<stdio.h>

#include<stdbool.h>

long int CalculatePower(int iBase, int iPower)
{
   int iCnt= 0;
   long int iResult= 1;

    for(iCnt = 1; iCnt <= iPower; iCnt++) // We can't reduce time complexity here
    {
        iResult= iResult * iBase;
    }
    return iResult;
}

int main()
{
    int iValue1= 0;
    int iValue2= 0;
    long int iRet= 0;   // <---------------  

    printf("enter base: \n");
    scanf("%d", &iValue1);

    printf("enter power: \n");
    scanf("%d", &iValue2);

    iRet= CalculatePower(iValue1, iValue2);

    printf("Result is: %d\n", iRet);

    return 0;
}