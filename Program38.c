// Calculate the factorial of number by accepting the number from user (Backward)

#include<stdio.h>

void DisplayB(int iNo)
{
    int iCnt= 0;

    for(iCnt = iNo; iCnt >=1 ; iCnt--)   // iCnt> 0;
    {
        printf("%d\t", iCnt);
    }
}

int main()
{   
    int iValue= 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    DisplayB(iValue);

    return 0;
}


/*


    iNo = 5

    5!

    iNo= 5 * 4 *
*/
