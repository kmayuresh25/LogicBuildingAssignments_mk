#include <stdio.h>
#include<stdbool.h>
#include <string.h>

void strRevX(char *str)
{ 
  char *start = NULL;
  char *End = NULL;

  start =  str;
  End = str;
  char  temp = '\0';

  while(*End != '\0')
  {
    End++;
  }
   End-- ;
   
  while( start < End)
  {
     temp = *start  ;
     *start = *End ;
     *End = temp;

    start++;
    End--;
    
  }
  
 //printf("Update string is %s",*str);
  
  
}

int main()
{
    char Arr [20] = {'\0'};
    char cVal = '0';
    //char nArr [50] = {'\0'};
  

    printf("Enter String :");
    scanf("%[^'\n']s",Arr);

    strRevX(Arr);

    printf("Updated String is %s",Arr);

   return 0;
}