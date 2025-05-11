//////////////////////////////////////////////////////////////////////////////////////////////////
//
//    File namev:  program1.c
//    Description: Accept the Character from user and convert the case of Char
//    Author :     Mayuresh Kaluskar
//    Date :       11/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include <ctype.h>


 void DisplayConvert(char Cvalue)
{ 
  char cInputVal ='\0';
  
  if(islower(Cvalue))
  {
    cInputVal = toupper(Cvalue);
    printf("%c : converted to Upper case",cInputVal);
  }
  else if(isupper(Cvalue))
  {
    cInputVal = tolower(Cvalue);
    printf("%c : converted to lower case ",cInputVal);
  }

}


int main()
{
  char cVal = '\0';
   printf("Enter Character :");

   scanf("%c",&cVal);

   DisplayConvert(cVal);
  
   return 0;
}