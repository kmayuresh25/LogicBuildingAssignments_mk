#include <stdio.h>
#include <stdbool.h>

bool CheckDigit(char ch)
{
    

    if((ch >= '0'  && ch <='9') )
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
   
   bRet = CheckDigit(cVal);

   if(bRet == true)
   {
    printf(" Given char is digit : %c",cVal);
   }
   else
   {
    printf("Given char is not digit");
   }

    return 0 ;
}
