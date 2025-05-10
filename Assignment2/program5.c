////////////////////////////////////////////////////////////////////
//
//    File namev:  program1.c
//    Description: Accept the number from user and Check for even and Odd
//    Author :     Mayuresh Kaluskar
//    Date :       28/04/2025
//
//////////////////////////////////////////////////////////////////



#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEvn(int iNo)
{
   if((iNo%2)==0 )
   {
     printf("The given number  %d : is Even", iNo);
   }
   else
   {
     printf("The given number  %d : is odd",iNo);
   }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%d",&iValue);

  if(iValue == 0 )
    {
      printf("Zero is not even nor odd please provide other number") ;
      return FALSE;
    }
   

    CheckEvn(iValue);

    

    return 0;
}