// Accept number from user and check whether that number contains 8 in it or not

#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(int iNo)
{
    int iDigit= 0;

    while(iNo !=0)
    {
       iDigit= iNo % 10;

       if((iDigit == 8))
       {
        break;     //<--------- 
       }
       iNo= iNo / 10;
    }

    if(iNo == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iValue= 0;
    bool bRet= false;

    printf("enter number:\n");
    scanf("%d", &iValue);

    bRet= CheckDigit(iValue);

    if(bRet == true)
    {
        printf("8 is present in number\n");
    }
    else
    {
        printf("8 is not present in number\n");
    }

    return 0;
}