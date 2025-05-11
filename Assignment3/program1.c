//////////////////////////////////////////////////////////////////////////////////////////////////
//
//    File namev:  program1.c
//    Description: Accept the number from user and Prints that number of Even numbers on screen
//    Author :     Mayuresh Kaluskar
//    Date :       11/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


 void PrintEvn(int iNo)
{ 
  int iCnt = 0, iNum=2;

  if(iNo == 0)
  {
    printf("Number is not natural number");
  }
  
  for(int iCnt=1;iCnt<=iNo;iCnt++)
  {
    printf("%d \n",iNum);
   iNum =iNum+2;
    
  }

}


int main()
{
  int  iVal= 0;
   printf("the number is :");
   scanf("%d",&iVal);

   PrintEvn(iVal);
  

}