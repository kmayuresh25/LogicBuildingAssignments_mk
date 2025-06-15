#include <stdio.h>
#include<string.h>

void StrNcpyX(char *src , char *dest)
{
     char *mid = {'\0'};

    while(*src != 0)
   {

    src++;
    
   }
   src--;
  
   while(*dest != 0)
  {
    src++;
    *src = *dest;
    dest++;
  }

  *dest = '\0';

}

int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char brr[30] = "Logic Buidling";

    StrNcpyX(Arr, brr);

    
    printf("Updated String is %s\n",Arr);

    return 0;
}