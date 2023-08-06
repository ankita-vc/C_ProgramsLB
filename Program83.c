// Accept N number from user and find maximum number from N numbers:

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iCnt= 0;
    int iMax= Arr[0];

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
      if(Arr[iCnt]>iMax)
      {
        iMax= Arr[iCnt];      
      }
    }
    return iMax;
}

int main()
{
  int iSize= 0;
  int iCnt= 0; 
  int  *ptr= NULL;

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
    printf("%d\n",ptr[iCnt]);
  }

  int iRet= Maximum(ptr,iSize);

  printf("the largest element is: %d",iRet);

  free(ptr);

  return 0;
}

