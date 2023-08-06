// Accept N number and an element from user and return last occurance of that element(index):

#include<stdio.h>
#include<stdlib.h>

#define ERR_NOTFOUND -1

int SearchLastOccurance(int Arr[], int iLength, int iNo)
{
  int iCnt= 0;
  int iPos= ERR_NOTFOUND;   // -1   ******

  for(iCnt=0; iCnt<iLength; iCnt++)
  {
    if(Arr[iCnt]== iNo)
    {
      iPos= iCnt;
    }
  }
  return iPos;
} 

int main()
{
  int iSize= 0;
  int iValue= 0;
  int iCnt= 0; 
  int  *ptr= NULL;
  int iRet= 0;

  printf("enter the number of elements:\n");
  scanf("%d",&iSize);

  ptr= (int*)malloc(iSize * sizeof(int));

  printf("enter the elements:\n");
  for(iCnt=0; iCnt<iSize; iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }

  printf("enter the element that you want to search:\n");
  scanf("%d", &iValue);

  printf("elements of array are:\n");
  for(iCnt= 0; iCnt<iSize; iCnt++)
  {
    printf("%d\n",ptr[iCnt]);
  }

  iRet= SearchLastOccurance(ptr, iSize, iValue);

  if(iRet == ERR_NOTFOUND)
  {
    printf("there is no such element\n");
  }
  else
  {
    printf("%d occured at index %d \n", iValue, iRet);
  }

  free(ptr);

  return 0;
}

