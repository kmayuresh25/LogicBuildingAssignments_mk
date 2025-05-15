/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name:  program1.c
//    Description: Accept the number from the user and print in words
//    Author :     Mayuresh Kaluskar
//    Date :       15/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    if(iNo < 0 || iNo >= 10)
    {
        printf("Invalid nUMBER");
    }

   if(iNo == 0)
   {
    printf("Zero");
   }
   else if( iNo == 1)
   {
    printf("One");
   }
    else if( iNo == 2)
   {
    printf("Two");
   }
    else if( iNo == 3)
   {
    printf("Three");
   }
    else if( iNo == 4)
   {
    printf("Four");
   }
    else if( iNo == 5)
   {
    printf("Five");
   }
    else if( iNo == 6)
   {
    printf("Six");
   }
    else if( iNo == 7)
   {
    printf("Seven");
   }
    else if( iNo == 8)
   {
    printf("Eight");
   }
    else if( iNo == 9)
   {
    printf("Nine");
   }
}

int main()
{
   int iVal = 0;

   printf("Enter Number :");
   scanf("%d",&iVal);

   Display(iVal);
    return 0;
}
