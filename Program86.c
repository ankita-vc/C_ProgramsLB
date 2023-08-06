// Accept N number from user and find minimum and maximum number from N numbers in a same function:
// Time complexity= N

#include<stdio.h>
#include<stdlib.h>

void MinumumMaximum(int Arr[], int iLength)
{
    int iCnt= 0;
    int iMin= Arr[0];
    int iMax= Arr[0];

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
      if(Arr[iCnt]<iMin)
      {
        iMin= Arr[iCnt]; 
      }

      if(Arr[iCnt]>iMax)
      {
        iMax= Arr[iCnt];  
      }
    }
    printf("%d\n",iMin);
    printf("%d\n",iMax); 
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

  MinumumMaximum(ptr,iSize);

  free(ptr);

  return 0;
}

