/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name:  program1.c
//    Description: Accept number from User and Count frqn of digits grater than 3 and less than 7
//    Author :     Mayuresh Kaluskar
//    Date :       17/05/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountRange(int iNo)
{
   int iCnt = 0;
   int iDigit = 0;

   while((iNo)!= 0)
   {
      iDigit = iNo % 10;
      if((iDigit > 3) && (iDigit < 7))
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

    iRet = CountRange(iVal);

    printf("NUmber of digits betn 3 and 7 in Given number : %d", iRet);

    return 0;
}