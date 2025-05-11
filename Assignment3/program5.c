//////////////////////////////////////////////////////////////////////////////////////////////////
//
//    File namev:  program1.c
//    Description: Accept the Character from user and check whether that character is vowel
//    Author :     Mayuresh Kaluskar
//    Date :       11/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;


 BOOL ChkVowel(char Cvalue)
{ 
  
  
  if(Cvalue == 'a','A'|| Cvalue == 'e','E'|| Cvalue == 'i','I'|| Cvalue == 'o','O'|| Cvalue == 'u','U' )
  {
    return TRUE;
  }
  else 
  {
    return FALSE ;
  }

}


int main()
{
  char cVal = '\0';
  
  BOOL bRet = FALSE; 

   printf("Enter Character :");

   scanf("%c",&cVal);

   bRet = ChkVowel(cVal);

   if(bRet == TRUE)
   {
    printf("It is vowel");
   }
   else
   {
    printf("IT is not vowel");
   }
  
   return 0;
}