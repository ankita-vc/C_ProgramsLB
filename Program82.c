#include<stdio.h>
#include<stdlib.h>

void fun(int Arr[], int iLength)
{
  //Logic
}

int main()
{
  int iSize= 0;
  int iCnt= 0; 
  int *ptr= NULL;

  printf("enter the number of elements:\n");
  scanf("%d",&iSize);

  ptr= (int*)malloc(iSize * sizeof(int));

  printf("enter the elements:\n");
  for(iCnt=0; iCnt<iSize; iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }

  printf("elements of array are:\n");
  for(iCnt= 0; iCnt<iSize; iCnt++)
  {
    printf("%d\t",ptr[iCnt]);
  }

  fun(ptr,iSize);

  free(ptr);

  return 0;
}

