// Write the program which checks whether the number is even or odd.

#include<stdio.h>    // for printf and scanf
#include<stdbool.h>  // for bool data type

///////////////////////////////////////////////////////////////////////
//
// Function name:    CheckEvenOdd
// Input:            Integer
// Output:           Boolean
// Description:      Checks whether the input is even or odd
// Author:           Ankita Vijaykumar Chavan
// Date:             25/04/2023
// Update Date:      
//
///////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

///////////////////////////////////////////////////////////////////////
//// Entry point function
//////////////////////////////////////////////////////////////////////

int main()
{   
    int iValue= 0;      // Variable to accept input
    bool bRet= false;   // Variable to accept return value

    printf("Please enter a number to check whether it is even or odd:\n");
    scanf("%d", &iValue);

    bRet= CheckEvenOdd(iValue);   // Function call

    if ((bRet)== true)
    {
        printf("%d is Even number\n", iValue);
    }

    else
    {
        printf("%d is Odd number\n", iValue);
    }
    return 0;
}




/*
      11*
*/