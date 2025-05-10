////////////////////////////////////////////////////////////////////
//
//    File namev:  program1.c
//    Description: Accept the number from the user and print the number of *
//    Author :     Mayuresh Kaluskar
//    Date :       28/04/2025
//
//////////////////////////////////////////////////////////////////



#include<stdio.h>

void Display(int iNo)
{
    
     
    while(iNo > 0)
    {
        printf("*");
         printf("\n");
       iNo--;
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