#include <stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
     
    printf("Factors of number  %d :\n",iNo);
    for(int iCnt =1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
           printf("%d\n",iCnt);
        }
    }


}


int main()
{
    int iVal =0;

    printf("Enter the number :");
    scanf("%d",&iVal);

    NonFact(iVal);

    return 0;
}