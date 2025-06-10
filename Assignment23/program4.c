#include <stdio.h>
#include <stdbool.h>

bool ChkSpecial(char ch)
{
    
    if (!((ch >='a' && ch <='z') || (ch >='A' && ch <='z') || (ch >='0' && ch <='9')  ))
    {
       return true;
    }
    else
    {
        return false;
    }
}

int main ()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the charachetr ");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == true)
    {
        printf("Given input %c is special char",cValue);
    }
    else
    {
        printf("Given input %c is not special char",cValue);
    }

    return 0;
}