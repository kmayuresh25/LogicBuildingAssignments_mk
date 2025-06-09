#include <stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    
      while( *str != 0)
      {
        if((*str == 'a' ) ||  (*str == 'e' ) || (*str == 'i') || (*str == 'o') || (*str == 'u') )
        {
            return true;
        }
        else
        {
            return false;
        }
       
         str++;
      }

      return false;
}

int main()
{
    char arr[20];

    bool bRet = false;

    printf("Enter the String : ");
    scanf("%[^'\n']s",&arr);

   bRet = ChkVowel(arr);

   if(bRet == true)
  {
    printf("String contains vowels");
  }
  else if( bRet == false)
  {
    printf("String does not contain vowels");
  }

    return 0;
}