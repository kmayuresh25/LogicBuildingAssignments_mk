//////////////////////////////////////////////////////////////////////////
//
//    File namev:  program3.c
//    Description: Accept one number and Print that number of * on scrern
//    Author :     Mayuresh Kaluskar
//    Date :       10/05/2025
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Accept(int iNo)
{
  int iCnt =0 ;

  for(int iCnt =1;iCnt<=iNo;iCnt++)
  {
    printf("*");
    printf("\n");
  }
 
}

int main()
{
   int iValue=0;
  
  printf("Enter number :");
  scanf("%d",&iValue);

   Accept(iValue);
   
    return 0;
}