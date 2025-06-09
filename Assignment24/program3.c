#include <stdio.h>

int Difference(char *str)
{
    int iCnt=0,iCnt1=0;
      while( *str != 0)
      {
        if((*str >= 'a' )&& (*str <='z'))
        {
            iCnt++;
        }
        if((*str >= 'A' )&& (*str <='Z'))
        {
            iCnt1++;
        }
         str++;
      }

      return iCnt-iCnt1;
}

int main()
{
    char arr[20];

    int iRet = 0;

    printf("Enter the String : ");
    scanf("%[^'\n']s",&arr);

   iRet = Difference(arr);

   printf("Frqn Diff betn smalla and capital chars is : %d",iRet);

    return 0;
}