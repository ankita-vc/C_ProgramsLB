/*
  Check whether the accepted input conatins digit or not:
*/ 

#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char cValue)
{
  if((cValue >='0') && (cValue <='9'))
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{ 
  char ch= '\0';
  bool bRet= false;

  printf("Enter character:\n");
  scanf("%c", &ch);

  bRet= CheckDigit(ch);

  if(bRet==true)
  {
    printf("%c is a digit\n",bRet);
  }
  else
  {
    printf("%c is not a digit\n",bRet);
  }

  return 0;
}