// Accept N number and an element from user and check whether that element is present in array or not:

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iLength, int iNo)
{
  int iCnt= 0;

  for(iCnt=0; iCnt<iLength; iCnt++)
  {
    if(Arr[iCnt]== iNo)
    {
      break;
    }
  }

  if(iCnt==iLength)
  {
    return false;
  }
  else
  {
    return true;
  }  
}


int main()
{
  int iSize= 0;
  int iValue= 0;
  int iCnt= 0; 
  int  *ptr= NULL;
  bool bRet= false;

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

  bRet=Search(ptr, iSize, iValue);

  if(bRet== true)
  {
    printf("%d is present in array..\n", iValue);
  }
  else
  {
    printf("%d is not present in array..\n", iValue);
  }

  free(ptr);

  return 0;
}

