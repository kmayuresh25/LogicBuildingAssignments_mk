/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name:  program1.c
//    Description: Accept number from User and Count frqn odd digits
//    Author :     Mayuresh Kaluskar
//    Date :       17/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountEven(int iNo)
{
   int iCnt = 0;
   int iDigit = 0;

   while((iNo)!= 0)
   {
      iDigit = iNo % 10;
      if((iDigit % 2) != 0)
      {
        iCnt++;
      }

      iNo = iNo / 10; 
   }

   return iCnt;

}

int main()
{
    int iVal = 0 ;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iVal);

    iRet = CountEven(iVal);

    printf("NUmber of Odd digits in Given number : %d", iRet);

    return 0;
}