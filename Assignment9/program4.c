/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name:  program1.c
//    Description: Accept number from User and Count frqn of 4 in it.
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
     
     if((iDigit) == 4)
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
    printf("frqn of digit 4 is :%d",iRet);
    
    return 0;
}