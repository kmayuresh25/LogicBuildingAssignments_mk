////////////////////////////////////////////////////////////////////
//
//    File namev:  program1.c
//    Description: Accept the number from user and Check for even and Odd
//    Author :     Mayuresh Kaluskar
//    Date :       11/05/2025
//
//////////////////////////////////////////////////////////////////



#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEvn(int iNo)

{  

  if(iNo == 0 )
    {
      printf("Zero is not even nor odd please provide other number") ;
      return FALSE;
    }

   if((iNo%2)==0 )
   {
    
    return TRUE ;
   }
   else
   {
     return FALSE ;
   }

   
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%d",&iValue);

  
   

    bRet = CheckEvn(iValue);

    if(bRet == TRUE)
    {
      printf("Number is even");
    }
    else
    {
      printf("Number is odd");
    }

    

    return 0;
}
