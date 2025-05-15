/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name:  program1.c
//    Description: Accept number from User and display its digit in Reverse
//    Author :     Mayuresh Kaluskar
//    Date :       15/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void DisplayDigit(int iNo)
{
   int iDigit = 0;

   if(iNo < 0)
   {
     iNo = -iNo;
   }
    
   while((iNo)!= 0)
   {
     iDigit = iNo % 10;

     printf("%d\n",iDigit);

     iNo  = iNo/10 ;
   }
   

}

int main()
{
    int iVal = 0;

    printf("Enter the number :");
    scanf("%d",&iVal);

    DisplayDigit(iVal);
    return 0;
}