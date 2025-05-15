#include <stdio.h>

int  FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;
     
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(int iCnt =1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)!= 0)
        {
          iSum1=iSum1+iCnt;
        }else
        {
          iSum2 = iSum2 +iCnt;
        }
    }
    
    return iSum2-iSum1;

}


int main()
{
    int iVal =0;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iVal);

  iRet = FactDiff(iVal);
 
  printf("Difference betn  factors and non factors is : %d",iRet);

    return 0;
}