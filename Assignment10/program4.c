/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name:  program1.c
//    Description: Accept number from User and enter multiplication of all digits
//    Author :     Mayuresh Kaluskar
//    Date :       17/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int MultDigits(int iNo)
{
   int iCnt = 0;
   int iDigit = 0;
   int iMult = 1;

   while((iNo)!= 0)
   {
      iDigit = iNo % 10;
      
      iMult = iDigit * iMult;
      iNo = iNo / 10; 
   }

   return iMult;

}

int main()
{
    int iVal = 0 ;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iVal);

    iRet = MultDigits(iVal);

    printf("Multiplication of the Digits is : %d", iRet);

    return 0;
}