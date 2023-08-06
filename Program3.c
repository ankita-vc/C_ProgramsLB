//  Perform the addition of two numbers by accepting the input from user

#include<stdio.h>

int main()
{
    int no1= 0;
    int no2= 0;
    int ans= 0;

    printf("enter first number:");
    scanf("%d",&no1);

    printf("enter second number:");
    scanf("%d",&no2);

    ans= no1+no2;

    printf("the addition is: %d\n", ans);

    return 0;
}