/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File namev:  program5.c
//    Description: Accept the number from the user and print first 5 multiples of number  
//    Author :     Mayuresh Kaluskar
//    Date :       14/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMult = 1;
    
    
    for(int iCnt = 1;iCnt<= 5;iCnt++)
    {
           iMult = iCnt*iNo;

           printf("%d\n",iMult);
    }
    
}




int main()
{
    int iVal = 0;

    printf("Enter the number :");
    scanf("%d",&iVal);

    MultipleDisplay(iVal);

    return 0;

}