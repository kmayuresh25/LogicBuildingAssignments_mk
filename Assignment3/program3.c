//////////////////////////////////////////////////////////////////////////////////////////////////
//
//    File namev:  program1.c
//    Description: Accept the number from user and Prints factor of that number
//    Author :     Mayuresh Kaluskar
//    Date :       11/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


 void DisplayFactor(int iNo)
{ 
  int iCnt = 0;

  

  if(iNo <= 0)
  {
    iNo = -iNo;
  }
  
  for(int iCnt=1;iCnt<=(iNo/2);iCnt++)
  {
    if((iNo%iCnt)== 0 && (iCnt%2==0))
    {
      printf("\n %d",iCnt);
    }
    
  }

}


int main()
{
  int  iVal= 0;
   printf("the number is :");
   scanf("%d",&iVal);

   DisplayFactor(iVal);
  

}