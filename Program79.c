// Accept N number from user and count number of even elements from N numbers

#include<stdio.h>   // IO
#include<stdlib.h>   // For Memory Management

int CountEven(int Arr[], int iLength)
{
   int iCounter= 0;
   int iCnt= 0;

  for(iCnt= 0; iCnt< iLength; iCnt++)
  {
    if((Arr[iCnt] % 2)== 0)
    {
        iCounter++;
    }
  }
  return iCounter;
}

int main()    // Entry point function
{
    int iSize= 0;  // to store size of array
    int * ptr= NULL;  // To store address of array
    int iCnt= 0;  // Loop Counter
    int iRet= 0;

    // Step1: Acept the number of elements from user
    printf("Enter number of Elements:\n");
    scanf("%d", &iSize);

    // Step2: Allocate memory dynamically
    ptr= (int*)malloc(iSize * sizeof(int));

    // Step3: Accept the values from user
    printf("Enter the elements:\n");
    for(iCnt= 0; iCnt< iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements of array are:\n");
    for(iCnt= 0; iCnt< iSize; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);
    }

    // Step4: Pass the array to the function
    iRet= CountEven(ptr, iSize);   // Demo(400, 4);

    printf("no of even elements are:%d\n", iRet);

    //Step6: Dealloacte the memory of array
    free(ptr);

    return 0;   // Return success to OS
}