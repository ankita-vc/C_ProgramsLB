//  Problen on N numbers:  Static memory alloaction for aray (using for loop)

#include<stdio.h>    // for printf and scanf
#include<stdlib.h>   // for malloc calloc realloac

int main()
{
    int Arr[5];
    int iCnt= 0;

    printf("Enter the elements:\n");

    for(iCnt= 0; iCnt< 5; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }

    printf("Elements of array are:\n");
    
    for(iCnt= 0; iCnt< 5; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }

    return 0;
}


