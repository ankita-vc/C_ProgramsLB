// Accept the number from user and count the even digits from that number 

#include<stdio.h>

int CountEvenDigit(int iNo)
{
    int iDigit= 0;
    int iCount= 0;

    if(iNo<0)   // updator
    {
        iNo= -iNo;
    }

    while(iNo != 0)
    {
        iDigit= iNo % 10;
        if((iDigit % 2)== 0)
        {
            iCount++;
        }
        iNo= iNo/10;
    }
    return iCount;
}

int main()
{
    int iValue;
    int iRet= 0;

    printf("enter number:\n");
    scanf("%d", &iValue);

    iRet= CountEvenDigit(iValue);

    printf("Number of Even digits are: %d", iRet);

    return 0;
}