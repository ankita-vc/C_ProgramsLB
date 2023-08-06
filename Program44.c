// Calculate the factorial of number by accepting the number from user (While LOoP)

#include<stdio.h>

void DisplayF(int iNo)
{
    int iCnt= iNo;

    while(iCnt >= 1)
    {
        printf("%d\t", iCnt);
        iCnt--;
    }
}

int main()
{   
    int iValue= 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    DisplayF(iValue);

    return 0;
}


/*


    iNo = 5

    5!

    iNo= 5 * 4 *
*/
