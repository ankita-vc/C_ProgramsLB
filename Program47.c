// 

#include<stdio.h>

void  DisplayDigits(int iNo)
{
    int iDigit = 0;    // 761

    while(iNo != 0)
    {
        iDigit = iNo % 10;   // we need reminder here(1)
        printf("%d\n", iDigit);
        iNo= iNo/10;        // we need division here(76)
    }
}

int main()
{
    int iValue= 0;

    printf("enter number:\n");   // iValue= 761
    scanf("%d", &iValue);

    DisplayDigits(iValue);

    return 0;
}

/*
iNo= 761;

iDigit= iNo % 10   1
iNo= iNo / 10      76

iDigit= iNo % 10   6
iNo= iNo / 10      7

iDigit= iNo % 10   7
iNo= iNo / 10      0    loop stops here
*/