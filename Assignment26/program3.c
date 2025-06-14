#include <stdio.h>
#include<stdbool.h>
#include <string.h>

int Firstchar(char *str , char ch )
{ 
  int iCnt = 0,iOcr = 0;
  
  for(iCnt = 0; iCnt<strlen(str);iCnt++)
  {
    if( *str == ch)
      {
        
         break;

         iOcr = iCnt; 
      }
      
     
  }
    

   
    return iOcr;
}

int main()
{
    char Arr [20] = {'\0'};
    char cVal = '0';
    int iRet = false;

    printf("Enter String :");
    scanf("%[^'\n']s",Arr);

    printf("Enter character:");
    scanf("\n%c",&cVal);

    iRet = Firstchar(Arr,cVal);

    printf(" Firt occurnace of char %c is %d",cVal, iRet);

   return 0;
}