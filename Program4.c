/*

  step 1:  Understand the problem statement
  step 2:  Write the algorithm
  step 3:  Decide the programming language
  step 4:  write the program
  step 5:  Test the written program
*/

// Write a program which performs addition of two numbers:

/*
  Algorithm

  start
    Accept First no as no1
    Accept second no as no2
    Creat one variable as Ans
    Perform addition of no1 and no2
    Store the addition in the variable Ans
    Display the value of Ans
  stop
*/

///////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement: Write a program which performs addition of two numbers
//
///////////////////////////////////////////////////////////////////////////////////////
//
//  Function name :   Addition
//  Input         :   unsigned integer, unsigned integer
//  Output        :   unsigned integer
//  Description   :   Perform addition of two numbers
//  Author        :   Ankita Vijaykunar Chavan
//  Date          :   18/04/2023
//
///////////////////////////////////////////////////////////////////////////////////////
//
unsigned int Addition(unsigned int iValue1, unsigned int iValue2)
{
  unsigned int iResult= 0;
  iResult= iValue1 + iValue2;   //Bussiess logic
  return iResult;
}

//
///////////////////////////////////////////////////////////////////////////////////////
//  Entry Point Function
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
  unsigned int iNo1= 0, iNo2= 0, iAns= 0;

  printf("Enter the first number:\n");
  scanf("%d", &iNo1);

  printf("Enter the second number:\n");
  scanf("%d", &iNo2);

  iAns= Addition(iNo1, iNo2);

  printf("Addition is: %d \n", iAns);

  return 0;
}