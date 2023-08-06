// Take a input from user and display the factor of that number

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)   // O(N)    <---------- Order of N
    {
        if((iNo % iCnt)==0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue= 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return 0;
}


/*

Time complexity is number of times the application iterates. (Not applicable everywhere and without loops)

Time Complexity: O(N)
Where N is the input(Natural Number)

Time Complexity is Optimization of CODE...

*/