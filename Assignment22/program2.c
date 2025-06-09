#include <stdio.h>
#include <stdbool.h>

bool CheckCapital(char ch)
{
    

    if((ch >= 65  && ch <=90) )
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
   
   bRet = CheckCapital(cVal);

   if(bRet == true)
   {
    printf(" Given char is capital %c",cVal);
   }
   else
   {
    printf("Given char is not capital");
   }

    return 0 ;
}
