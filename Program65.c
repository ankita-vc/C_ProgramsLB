// Accept number from user and chek whether that number is pallindrome or not

#include<stdio.h>
#include<stdbool.h>


bool CheckPallindrome(int iNo)
{
    int iDigit= 0;
    int iReverse= 0;
    int iTemp= iNo;   // ******* // (Backup of iNo)

    while(iNo != 0)
    {
        iDigit= iNo % 10;
        iReverse= (iReverse * 10)+ iDigit;
        iNo = iNo / 10;
    }
    if(iReverse == iTemp)
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

    printf("enter number:");
    scanf("%d", &iValue);

    bRet= CheckPallindrome(iValue);

    if(bRet == true)
    {
        printf(" %d is a pallindrome\n", iValue);
    }
    else
    {
        printf(" %d is not pallindrome\n", iValue);
    }
    
    return 0;
}