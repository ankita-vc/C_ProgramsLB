// Accept the number from user and count the frequency of 8 from that number

#include<stdio.h>

int CountDigitFrequency(int iNo)
{
    int iDigit= 0;
    int iCount= 0;

    if(iNo<0)   // Updator
    {
        iNo= -iNo;
    }

    while(iNo != 0)
    {
        iDigit= iNo % 10;

        if(iDigit == 8)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue= 0;
    int iRet= 0;

    printf("enter number:\n");
    scanf("%d", &iValue);

    iRet= CountDigitFrequency(iValue);

    printf("Frequency of 8 is:\n", iRet);

    return 0;
}