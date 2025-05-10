//////////////////////////////////////////////////////////////////////////
//
//    File namev:  program3.c
//    Description: Program to print 5 to 1 numbers on screen
//    Author :     Mayuresh Kaluskar
//    Date :       10/05/2025
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int i =0;
    i=5;

    while(i>=1)
    {
        printf("%d \n",i);
         i--;

    }
}

int main()
{
    Display();

    return 0;
}