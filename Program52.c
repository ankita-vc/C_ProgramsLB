// 

#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit= 0;

    for( ;iNo != 0; )
    {
        iDigit = iNo % 10;
        printf("%d\t", iDigit);
        iNo= iNo/10;   // considered as condition
    }
}

int main()
{
    int iValue= 0;

    printf("enter the number:\n");
    scanf("%d", &iValue);

    DisplayDigits(iValue);

    return 0;
}