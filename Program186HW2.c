#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define ERR_NOTFOUND -1

void Display(char *src, char *dest)
{
    while(*src != '\0')
    {
       if((*src >= 'a') && (*src <= 'z'))
       {
        *dest = *src;
        *dest = *src - 32;
        dest++;
       }
       else if((*src >= 'A') && (*src <= 'Z'))
       {
        *dest = *src;
        *dest= *src + 32;
        dest++;
       }
       src++;
    }
}

int main()
{
    char Arr[20];
    char Brr[20];
    char ch= '\0';

    printf("Enter String:\n");
    scanf("%[^'\n']s", Arr);

    Display(Arr, Brr);

    printf("%s\n", Brr);

}