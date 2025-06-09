#include <stdio.h>

void Reverse(char *str)
{ 
  int iLength = 0, iCnt = 0;

   while(*str != '\0')
   {
     iLength++;
     str++;
   }
   str--;
  

  for(iCnt = iLength-1;iCnt>=0;iCnt--,str--)
  {
    printf("%c",*str);
  }

}

int main()
{
  char Arr[50] = {'\0'};

  printf("Enter the string : ");
  scanf("%[^'\n']s",Arr);

  Reverse(Arr);
   
  return 0;
}