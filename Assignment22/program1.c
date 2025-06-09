#include <stdio.h>
#include <stdbool.h>

bool ChkAplha(char ch)
{
    printf("%d",ch);

    if((ch >= 65  || ch <=90)  && (ch >= 95 || ch <= 122))
    {
        
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
   char cVal ='\0';
   bool bRet =  false;

   printf("Enter the character :");
   scanf("%c", &cVal);
   
   bRet = ChkAplha(cVal);

   if(bRet == true)
   {
    printf(" Given char is alphabet %c",cVal);
   }
   else
   {
    printf("Given char is not alpahbet");
   }

    return 0 ;
}
