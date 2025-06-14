#include <stdio.h>
#include<stdbool.h>

bool Chkchar(char *str , char ch )
{ 
    bool bFlag = false;

    while(*str != 0)
    {
      if( *str == ch)
      {
         bFlag = true; 
      }
      else
      {
        bFlag = false;
      }

      str++;
    }
   
    return bFlag;
}

int main()
{
    char Arr [20] = {'\0'};
    char cVal = '0';
    bool bRet = false;

    printf("Enter String :");
    scanf("%[^'\n']s",Arr);

    printf("Enter character:");
    scanf("\n%c",&cVal);

    bRet = Chkchar(Arr,cVal);

    if(bRet == true)
    {
        printf("Char is present in string ");
    }
    else if(bRet == false)
    {
        printf("Charcter is not present in string ");
    } 

   return 0;
}