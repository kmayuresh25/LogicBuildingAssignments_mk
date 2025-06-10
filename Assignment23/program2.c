#include <stdio.h>

void Display(char ch)
{
    
    if(ch >= 'A' && ch <='Z')
    {
        for
        ch = ch + 32;
    }
    else if(ch >= 'a'  && ch <='z')
    {
        ch = ch-32;
    }
    else if (ch >='0' && ch <='9')
    {
        ch = ch + 0;
    }
    

    printf("%c",ch);

}

int main()
{
    char cVal = '\0';

    printf("Entert the character :");
    scanf("%c",&cVal);
     
    Display(cVal);

    return 0;
}