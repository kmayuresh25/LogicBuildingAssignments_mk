#include <stdio.h>

int  SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
     
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(int iCnt =1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)!= 0)
        {
          iSum=iSum+iCnt;
        }
    }
    
    return iSum;

}


int main()
{
    int iVal =0;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iVal);

  iRet = SumNonFact(iVal);
 
  printf("Summation of the non factors is : %d",iRet);

    return 0;
}