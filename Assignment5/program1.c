///////////////////////////////////////////////////////////////////////////////////
//
//    File namev:  program1.c
//    Description: Accept the number from the user and print the number of $ and *
//    Author :     Mayuresh Kaluskar
//    Date :       14/05/2025
//
////////////////////////////////////////////////////////////////////////////////////




#include <stdio.h>
void Display(int iNo)
{
  int iCnt =0;

  if(iNo<0)
  {
    iNo = -iNo;
  }

  for(int iCnt=1;iCnt<=iNo;iCnt++)
  {
    printf("$  * ");
  }
  

}

int main()
{
    int iVal = 0;
    
    printf("ENTER THE number :");
    scanf("%d",&iVal);

  Display(iVal);
  
  return 0;
}