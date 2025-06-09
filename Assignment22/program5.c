#include <stdio.h>
#include <stdbool.h>

void CheckExamTime(char ch)
{
    
   if(ch == 'a' || ch == 'A')
   {
     printf("Your exam at 7 AM");
   }
   if(ch == 'b' || ch == 'B' )
   {
    printf("Your exam at 8:30 AM");
   }
   if(ch == 'c' || ch == 'C' )
   {
    printf("Your exam at 9:20 AM");
   }
   if(ch == 'd' || ch == 'D' )
   {
    printf("Your exam at 10:30 AM");
   }
}

int main()
{
   char cVal ='\0';
   bool bRet =  false;

   printf("Enter the character :");
   scanf("%c", &cVal);
   
    CheckExamTime(cVal);


    return 0 ;
}
