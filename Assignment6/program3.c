/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name:  program3.c
//    Description: Accept the number from the user and print factorial          
//    Author :     Mayuresh Kaluskar
//    Date :       15/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int Factorial(int iNo)

{
    int iCnt = 0;
    int iMult =1;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    for(int iCnt = 1; iCnt <= iNo;iCnt++)
    {
       iMult = iCnt * iMult;
    }
    
    return iMult;

}

int main()
{
   int iVal = 0;
   int iRet = 0;

   printf("Enter the number : ");
   scanf("%d",&iVal);

   iRet = Factorial(iVal);

   printf("Factorial of the number is %d ",iRet);

    return 0;
}