#include <stdio.h>
#include<string.h>

void StrNcpyX(char *src , char *dest , int iCnt)
{
    

    while((*src != '\0') && (iCnt!=0))
   {

    *dest = *src;
     src++;
     dest++;
     iCnt--;

   }

   *dest = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char brr[30] = {'\0'};

    StrNcpyX(Arr, brr,10);

    printf("original string %s\n",Arr);
    printf("Updated String is %s\n",brr);

    return 0;
}