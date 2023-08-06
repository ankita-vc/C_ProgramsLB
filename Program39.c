// 

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt= 0;
    int Result= 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)   // iCnt> 0;
    {
        Result = Result * iNo;
    }
    return Result;
}

int main()
{   
    int iValue= 0;
    int iRet= 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    iRet= Factorial(iValue);

    printf("Result is : %d\n", iRet);

    return 0;
}
