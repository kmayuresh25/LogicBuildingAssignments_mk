///////////////////////////////////////////////////////////////////////////////////
//
//    File namev:  program3.c
//    Description: Accept the number from the user and print the number line
//    Author :     Mayuresh Kaluskar
//    Date :       14/05/2025
//
////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
     

    for(int iCnt = iNo;iCnt>=(-iNo);iCnt--)
    {
        printf("%d\t",iCnt);
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