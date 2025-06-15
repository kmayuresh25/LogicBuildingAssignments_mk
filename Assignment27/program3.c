#include <stdio.h>
#include<string.h>

void StrNcpyX(char *src , char *dest)
{
    

    while(*src != 0)
   {

    if ((*src >='A') && (*src <= 'Z'))
    {
        *dest = *src;
         dest++;
    }
     src++;
     

     //printf("%c",*src);
   }

   *dest = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char brr[30] = {'\0'};

    StrNcpyX(Arr, brr);

    printf("original string %s\n",Arr);
    printf("Updated String is %s\n",brr);

    return 0;
}