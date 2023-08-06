// Check whether the number is prime or not..

#include<stdio.h>
#include<stdbool.h>

bool Display(int iNo)
{
    int iCnt= 0;

    for(iCnt= 2; iCnt < iNo; iCnt++)
    {
       if((iNo % iCnt)!= 0)
       {
        return true;
       }
       else
       {
        return false;
       }
    }
}

int main()
{
    int iValue= 0;
    bool bRet= 0;

    printf("enter number:\n");
    scanf("%d", &iValue);

    bRet= Display(iValue);

    if(bRet == true)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}
