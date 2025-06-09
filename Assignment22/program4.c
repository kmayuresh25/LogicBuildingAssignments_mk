#include <stdio.h>
#include <stdbool.h>

bool Checksmall(char ch)
{
    

    if((ch >= 95  && ch <=122) )
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
   
   bRet = Checksmall(cVal);

   if(bRet == true)
   {
    printf(" Given char is small %c",cVal);
   }
   else
   {
    printf("Given char is  capital");
   }

    return 0 ;
}
