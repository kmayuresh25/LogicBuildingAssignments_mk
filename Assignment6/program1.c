/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name:  program1.c
//    Description: Accept the number from the user and print small if number is less than 50
//                 print Medium if less than 100
//                 print Large if more than 100
//    Author :     Mayuresh Kaluskar
//    Date :       14/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Number(int iNo)
{
    if(iNo < 0 )
    {
        printf("This is invalid number \n");
    }
    
    else if((0 =< iNo < 50))
    {
        printf("Small\n");
    }
    else if( (iNo <= 100))
    {
       printf("Medium\n");
    }
    else if(iNo > 100)
    {
        printf("Large\n");
    }

}

int main()
{
    int iVal = 0;

    printf("Enter the number :");
    scanf("%d",&iVal);

    Number(iVal);

}