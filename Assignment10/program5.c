////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name:  program1.c
//    Description: Accept number from User and print diff betn summation of  even and  summation odd digits
//    Author :     Mayuresh Kaluskar
//    Date :       17/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountDiff(int iNo)
{
   int iCnt = 0;
   int iDigit = 0;
   int iSum1 = 0;
   int iSum2 = 0;

   while((iNo)!= 0)
   {
      iDigit = iNo % 10;
      if((iDigit % 2) != 0)
      {
        iSum1 = iSum1 + iDigit ; 
      }
      else
      {
         iSum2 = iSum2 + iDigit;
      }

      iNo = iNo / 10; 
   }

   return iSum1 - iSum2;

}

int main()
{
    int iVal = 0 ;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iVal);

    iRet = CountDiff(iVal);

    printf("Difference betn sum of even and sum of odd number is : %d", iRet);

    return 0;
}