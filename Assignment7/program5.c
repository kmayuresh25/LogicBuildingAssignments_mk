/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name:  program3.c
//    Description: Accept number and print difference betn odd and even factorial
//    Author :     Mayuresh Kaluskar
//    Date :       15/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
     int  iOdMult = 1;
     int iEvMult = 1;
     int iDiff = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= iNo ;iCnt++)
    {
        if((iCnt%2) != 0)
        {
            iOdMult = iOdMult * iCnt;
        }
        else if((iCnt%2) == 0)
        {
           iEvMult = iEvMult * iCnt;
        }
    }
    
    iDiff =  iEvMult - iOdMult;

 return iDiff ;
}

int main()
{
    int iVal = 0;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iVal);

    iRet = FactorialDiff(iVal);
    printf("Difference betn odd and even factorial :%d",iRet);

    return 0;
}