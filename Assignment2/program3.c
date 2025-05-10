////////////////////////////////////////////////////////////////////
//
//    File namev:  program1.c
//    Description: Accept the number if number is less than 10  then print hello else print DEMO
//    Author :     Mayuresh Kaluskar
//    Date :       28/04/2025
//
//////////////////////////////////////////////////////////////////



#include<stdio.h>

void Display(int iNo)
{
    
    if(iNo < 10)
    {
        printf("Hellow");
    }
    else
    {
        printf("Demo");
    
    }

}

int main()
{
    int iValue = 0;
    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}