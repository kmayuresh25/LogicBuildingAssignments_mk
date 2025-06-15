#include <stdio.h>

void StrCpyX(char *src , char *dest)
{
    

    while(*src != '\0')
   {

    *dest = *src;
     src++;
     dest++;

   }

   *dest = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char brr[30] = {'\0'};

    StrCpyX(Arr, brr);

    printf("original string %s\n",Arr);
    printf("Copied String is %s\n",brr);

    return 0;
}