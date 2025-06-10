#include <stdio.h>
 void Display(char ch)
 {
    
    printf("Decimal Number of char %c is %u\n",ch,ch);
    printf("Hexadecimal number of char %c is %x\n",ch,ch);
    printf("Octal number of char %c is %o",ch,ch);
    
    

 }

int main()
{  
    char cValue = '\0';

    printf("Enter the chaaracter :");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}