//////////////////////////////////////////////////////////////////////////
//
//    File namev:  program3.c
//    Description: Accept one number and chcek whether it is divisible by 5 or not
//    Author :     Mayuresh Kaluskar
//    Date :       10/05/2025
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE   1
#define FALSE -1


int Check(int iNo1)
{
  if ((iNo1 % 5)==0 )
  {
      return TRUE;
  }
  else
  {
    return FALSE;
  }
}

int main()
{
   int iValue1=0;
   BOOL bRet = FALSE;

   printf("Enter number :");
   scanf("%d",&iValue1);

   bRet = Check(iValue1);
   
   if(bRet == TRUE)
   {
    printf("Divisble by 5 \n");
   }else
   {
    printf("Not devisible by 5 \n");
   }

    return 0;
}