/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name:  program3.c
//    Description: Accept the number from the user and print table of the number        
//    Author :     Mayuresh Kaluskar
//    Date :       15/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Table(int iNo)

{
    int iCnt = 0;
    int iMult =1;
    

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    for(int iCnt = 1; iCnt <= 10 ;iCnt++)
    {
       iMult = iCnt * iNo;
       printf("%d\n",iMult);
    }
    
   

}

int main()
{
   int iVal = 0;
   

   printf("Enter the number : ");
   scanf("%d",&iVal);

   Table(iVal);

   

    return 0;
}