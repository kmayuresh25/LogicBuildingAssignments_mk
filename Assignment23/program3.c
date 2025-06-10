#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>


void Display(char ch)
{
    char Ccount = '0';

    
    
    if ( ch >= 'A' && ch <= 'Z')
    {
       for (Ccount = ch ; ( Ccount <='Z'); Ccount++)
     {
        printf("%c",Ccount);
     }

    }
    else if ( ch>='a' && ch <='z')
    {
         for (Ccount = ch ; ( Ccount <='z'); Ccount++)
     {
        printf("%c",Ccount);
     }
    }
    else
    {
       printf("Enter input as characters only");
       return;
    }
    
   // memset(ch,'0',sizeof(ch));
    

}

int main()
{
    char cVal = '\0';

    printf("Entert the character :");
    scanf("%c",&cVal);
    
    Display(cVal);

    return 0;
}