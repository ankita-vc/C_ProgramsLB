// Write the program which checks whether the number is divisible by 3 and 5.

#include<stdio.h>    // for printf and scanf
#include<stdbool.h>  // for bool data type

///////////////////////////////////////////////////////////////////////
//
// Function name:    CheckDivisible
// Input:            Integer
// Output:           Boolean
// Description:      Checks whether the input is divisible by 3 and 5
// Author:           Ankita Vijaykumar Chavan
// Date:             25/04/2023
// Update Date:      
//
///////////////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo)
{
   if(((iNo % 3)== 0) && ((iNo % 5)==0))
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

    printf("Please enter number to check whether it is divisible by 3 and 5:\n");
    scanf("%d", &iValue);

    bRet= CheckDivisible(iValue);   // Function call

    if ((bRet)== true)
    {
        printf("%d is completly divisible by 3 and 5...\n", iValue);
    }

    else
    {
        printf("%d is not completly divisible by 3 and 5...\n", iValue);
    }
    return 0;
}
