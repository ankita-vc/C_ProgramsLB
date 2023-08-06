// Accept the number from user and check whether the number is perfect or not

#include<stdio.h>
#include<stdbool.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)  // Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)   // 0(N/2)
    {
        if((iNo % iCnt)==0)
        {
            iSum= iSum + iCnt;
        }
    }
    return iSum;
}

bool CheckPerfect(int iNumber)
{
    int iResult = 0;

    iResult = SumFactors(iNumber);

    if(iResult == iNumber)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue= 0;
    bool bRet= false;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is the perfect number\n", iValue);
    }
    else
    {
        printf("%d is not the perfect number\n", iValue);
    }

    printf("Summation of factors is: %d\n", iValue);

    return 0;
}
