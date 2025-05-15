/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name:  program1.c
//    Description: Accept number from User and Count frqn of 2 in it.
//    Author :     Mayuresh Kaluskar
//    Date :       15/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>


int CountTwo(int iNo)
{
   int iDigit = 0;
   int iCnt = 0;
    
   while((iNo)!= 0)
   {
     iDigit = iNo % 10;
     
     iNo  = iNo/10 ;
     
     if((iDigit) == 2)
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

    iRet = CountTwo(iVal);
    printf("frqn of digit 2 is :%d",iRet);
    
    return 0;
}