/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name:  program3.c
//    Description: Accept number and print Odd factorial of number
//    Author :     Mayuresh Kaluskar
//    Date :       15/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iMult = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= iNo ;iCnt++)
    {
        if((iCnt%2) != 0)
        {
            iMult = iMult * iCnt;
        }
    }


 return iMult;
}

int main()
{
    int iVal = 0;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iVal);

    iRet = OddFactorial(iVal);
    printf("Odd factorial of number is :%d",iRet);

    return 0;
}