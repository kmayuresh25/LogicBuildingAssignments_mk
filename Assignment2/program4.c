////////////////////////////////////////////////////////////////////
//
//    File namev:  program1.c
//    Description: Accept the two numbers from user display first number second number of times 
//    Author :     Mayuresh Kaluskar
//    Date :       28/04/2025
//
//////////////////////////////////////////////////////////////////



#include<stdio.h>

void  Display(int iNo1 , int iFreqn)
{
    int iCnt =0;

   for(int iCnt=1;iCnt<=iFreqn;iCnt++)
   {
     printf("%d",iNo1);
     printf("\n");
   }
  

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number 1 : ");
    scanf("%d",&iValue1);

    printf("Enter the fren for number 1: ");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}