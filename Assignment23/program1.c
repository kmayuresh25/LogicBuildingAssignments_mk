#include <stdio.h>
 void DisplayAscII()
 {
    char ch ='\0';
    int iCnt = 0;
    printf("Decimal Hexa Chars \n");
    for(iCnt = 0; iCnt<=127;iCnt++,ch++)
    {
        printf("%d\t %x\t %c\t\n",ch,ch,ch);
    }

 }

int main()
{  

    DisplayAscII();
    return 0;
}