/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name:  program2.c
//    Description: Accept amount in US dollar and retunr its corresponding val in indian currency  1 $ =70 rupees 
//    Author :     Mayuresh Kaluskar
//    Date :       15/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int DollarToInr(int iNo)
{
    int iRupes = 0 ;
    int iDollar = 70 ;

     iRupes = iNo *  iDollar;

 return iRupes;
}

int main()
{
    int iVal = 0;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iVal);

    iRet = DollarToInr(iVal);
    printf("Amount in ruppes :%d",iRet);

    return 0;
}