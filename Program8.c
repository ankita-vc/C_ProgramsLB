// Write a program which accepts the marks and display the class accordingly...

/*
    0 to 34   : you are fail
    35 to 49  : you are pass
    50 to 59  : you are pass with second class
    60 to 74  : you are pass with first class
    75 to 100 : you are pass with first class distinction
*/

#include<stdio.h>

void DisplayResult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.00f))   // Filter
    {
        printf("It is not your Fathers college..\n");
        printf("Please enter your percentage in between 0 to 100..\n");
    }

    if((fMarks >= 0.0f) && (fMarks < 35.00f))
    {
        printf("You are Fail..\n");
    }
    else if((fMarks >= 35.00f) && (fMarks < 50.00f))
    {
        printf("You are Pass..\n");
    }
    else if((fMarks >= 50.00f) && (fMarks < 60.00f))
    {
        printf("You are Pass with Second class..\n");
    }
    else if((fMarks >= 60.00f) && (fMarks < 75.00f))
    {
        printf("You are Pass with First class..\n");
    }
    else if((fMarks >= 75.00f) && (fMarks < 100.00f))
    {
        printf("You are Pass with First class Distinction..\n");
    }
}

int main()
{
    float fValue= 0;

    printf("Enter your Percentage:\n");
    scanf("%f", &fValue);

    DisplayResult(fValue);

    return 0; 
}