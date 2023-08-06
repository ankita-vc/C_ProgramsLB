#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define ERR_NOTFOUND -1

int Display(char *src, char *dest)
{
    int iCnt= 0;

    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest= *src + 32;
            dest++;

        }
        else if((*src >= 'a') && (*src <= 'z'))
        {
            *dest= *src - 32;
            dest++;
        }
        else
        {
            *dest = *src;
            dest++;
        }
        src++;
    } 
    *dest = '\0';  
}

int main()
{
    char ch= '\0';
    char Arr[20];
    char Brr[20];
    int iRet= 0;
    bool bRet= false;

    printf("enter the string:\n");
    scanf("%s", Arr);

    Display(Arr, Brr);

    printf("updated string is: %s\n", Brr);

    return 0;
}