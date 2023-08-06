// Accept the number and the desired digit from user and check whether that digit is present in that number or not

#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(int iNo, int iSearch)
{
    int iDigit= 0;

    if((iSearch < 0) || (iSearch > 9))    // filter
    {
        printf("enter the digit in range 0 to 9\n");
        return false;
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
            break;
        }
        iNo= iNo/10;
    }

    if(iDigit == iSearch)
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
    int iValue1= 0, iValue2= 0;
    bool bRet= false;

    printf("enter number:\n");
    scanf("%d", &iValue1);

    printf("enter digit from 0 to 9:\n");
    scanf("%d", &iValue2);

    bRet= CheckDigit(iValue1, iValue2);

    if(bRet == true)
    {
        printf("%d is present in %d\n", iValue1, iValue2);
    }
    else
    {
        printf("%d is not present in %d\n", iValue1, iValue2);
    }

    return 0;
}