// Accept the number and desired digit from user and count the frequency of of that digit from that number

#include<stdio.h>

int CheckDigitFrequency(int iNo, int iSearch)
{
    int iDigit= 0;
    int iCount= 0;

    if((iSearch < 0) || (iSearch > 9))    // filter
    {
        printf("enter the digit in range 0 to 9\n");
        return 0;
    }
    if(iNo<0)   // updator
    {
        iNo= -iNo;
    }

    while(iNo != 0)
    {
        iDigit= iNo % 10;
        if(iDigit == iSearch)
        {
            iCount++;
        }
        iNo= iNo/10;
    }
    return iCount;
}

int main()
{
    int iValue1= 0, iValue2= 0;
    int iRet= 0;

    printf("enter number:\n");
    scanf("%d", &iValue1);

    printf("enter digit from 0 to 9:\n");
    scanf("%d", &iValue2);

    iRet= CheckDigitFrequency(iValue1, iValue2);

    printf("the frequency of %d from %d is: %d", iValue2, iValue1, iRet);

    return 0;
}