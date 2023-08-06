// Calculate the factorial of number by accepting the number from user

#include<stdio.h>

void DisplayF(int iNo)
{
    int iCnt= 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{   
    int iValue= 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    DisplayF(iValue);

    return 0;
}


/*


    iNo = 5

    5!

    iNo= 5 * 4 * 3 * 2 * 1
*/
