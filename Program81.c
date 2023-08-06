// Accept N number from user and calculate the average of elements in that array:

#include<stdio.h>   // IO
#include<stdlib.h>   // For Memory Management

float CalculateAverage(int Arr[], int iLength)
{
  int iCnt= 0;
  int iSum= 0;

  for(iCnt=0; iCnt<iLength; iCnt++)
  {
    iSum= iSum + Arr[iCnt];
  }
  return ((float) iSum / (float) iLength);
}

int main()
{
  int iSize= 0;
  int iCnt= 0;
  int *ptr= 0;

  printf("enter the number of elements:\n");
  scanf("%d",&iSize);

  ptr= (int*)malloc(iSize * sizeof(int));

  printf("enter the elements:\n");
  for(iCnt=0; iCnt<iSize; iCnt++)
  {
    scanf("%d", &ptr[iCnt]);
  }

  float fRet= CalculateAverage(ptr,iSize);

  printf("the average is: %f\n", fRet);

  free(ptr);

  return 0;
}