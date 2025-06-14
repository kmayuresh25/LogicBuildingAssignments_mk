#include <stdio.h>
#include<stdbool.h>
#include <string.h>

int Lastchar(char *str , char ch )
{ 
  int iCnt = 0,iOcr = 0;
  
  for(iCnt = (strlen(str)-1); iCnt>= 0;iCnt--)
  {
    if( str[iCnt] == ch)
      {
        
        iOcr = iCnt; 
         break;

         
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

    iRet = Lastchar(Arr,cVal);

    printf(" Last occurnace of char %c is %d",cVal, iRet);

      return 0;
}