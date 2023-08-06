//  Problems on N numbers:

#include<stdio.h>    // for printf and scanf
#include<stdlib.h>   // for malloc calloc realloac

int main()
{
    int iSize= 0;
    int *ptr= NULL;

    printf("enter the number of elements: \n");   // Step 1
    scanf("%d",& iSize);

    ptr= (int*) malloc (iSize * sizeof(int));    // Step 2 Here the memory gets allocated

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }
    else
    {
        printf("Memory alloacted Successfully...\n");
    }


    return 0;
}


