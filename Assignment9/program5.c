/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name:  program1.c
//    Description: Accept number from User and Count frqn of numbers less than 6
//    Author :     Mayuresh Kaluskar
//    Date :       15/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>


int CountFour(int iNo)
{
   int iDigit = 0;
   int iCnt = 0;
    
   while((iNo)!= 0)
   {
     iDigit = iNo % 10;
     
     iNo  = iNo/10 ;
     
     if((iDigit) < 6)
     {
       iCnt++;
     }

   }
   
 return iCnt;
}

int main()
{
    int iVal = 0;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iVal);

    iRet = CountFour(iVal);
    printf("frqn of less than digit 6 is  :%d",iRet);
    
    return 0;
}