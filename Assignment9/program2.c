/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name:  program1.c
//    Description: Accept number from User and Check whether it contains 0 or not
//    Author :     Mayuresh Kaluskar
//    Date :       15/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
   int iDigit = 0;

   if(iNo < 0)
   {
     iNo = -iNo;
   }
    
   while((iNo)!= 0)
   {
     iDigit = iNo % 10;
     
     iNo  = iNo/10 ;
     
     if(iDigit == 0)
     {
      return TRUE ;
     }

   }
   
 return FALSE;
}

int main()
{
    int iVal = 0;
   BOOL bRet = FALSE;
    printf("Enter the number :");
    scanf("%d",&iVal);

    bRet = ChkZero(iVal);
    if(bRet == TRUE)
    {
      printf("It contains Zero");
    }
    else
    {
       printf("It does not contain Zero");
    }

    return 0;
}