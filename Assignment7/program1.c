/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name:  program1.c
//    Description: Accept the number from the user and display pattern  
//    Author :     Mayuresh Kaluskar
//    Date :       15/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Display(int iNo)
{
    int  iCnt = 0;
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
          
       
    }

    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
     printf("#\t"); 
    }

}

int main()
{
    int iVal = 0;

    printf("Enter the number :");
    scanf("%d",&iVal);

    Display(iVal);

    return 0;
}