#include <stdio.h>
#include<stdbool.h>
#include <string.h>

int Chkchar(char *str , char ch )
{ 
    int iCount = 0;

    printf("%d", strlen(str));
    
    while(*str != 0)
    {
      if( *str ==  ch)
      {
         iCount++;
      }

      str++;
    }
   
    return iCount;
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

    iRet = Chkchar(Arr,cVal);

    printf(" Frequencey of char %c is %d",cVal, iRet);
   return 0;
}