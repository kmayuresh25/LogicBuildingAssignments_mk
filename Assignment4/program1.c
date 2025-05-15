#include <stdio.h>

int MultFactor(int iNo)
{ 
  int iCnt =0;
  int iMult =1;

  if(iNo < 0)
    {
        iNo = -iNo;
    }
  
  for(int iCnt =1;iCnt<=(iNo/2);iCnt++)
 {
    if(iNo%iCnt==0)
    {
        iMult = iMult*iCnt;
    }
 }

  return iMult;
}



int main()
{
   int iVal = 0;
   int iRet = 0;

   printf("Enter the number :",iVal);
   scanf("%d",&iVal);

   iRet = MultFactor(iVal);

   printf("%d",iRet);

    return 0;
}