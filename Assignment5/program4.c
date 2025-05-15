/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File namev:  program4.c
//    Description: Accept the number from the user and print all the odd nubers till that number 
//    Author :     Mayuresh Kaluskar
//    Date :       14/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;
    
   
    for(int iCnt = 1;iCnt<=iNo;iCnt++)
    {
        
        if((iCnt%2)!=0)
        {
           printf("%d\t",iCnt);
        }
    }


}

int main()
{
    int iVal = 0;

    printf("Enter the number :");
    scanf("%d",&iVal);

    OddDisplay(iVal);

    return 0;

}