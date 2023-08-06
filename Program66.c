// Accept the number from user and return the average of that accepted number

#include<stdio.h>

float DigitsAverage(int iNo)
{
    int iSum= 0;
    int iCount= 0;
    int iDigit= 0;

    if(iNo <0)
    {
        iNo= -iNo;
    }

    while(iNo != 0)
    {
        iDigit= iNo % 10;
        iSum= iSum + iDigit;
        iCount++;
        iNo= iNo/ 10;
    }

    return ((float) iSum / (float) iCount); // <--------- Typecasting

}

int main()
{
    int iValue= 0;
    float fRet= 0;

    printf("enter number:");
    scanf("%d", &iValue);

    fRet= DigitsAverage(iValue);

    printf("Average of Digits is: %f\n", fRet);

    return 0;
}