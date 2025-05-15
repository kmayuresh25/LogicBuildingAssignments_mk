#include <stdio.h>

void FactRev (int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
     
    printf("Factors of number  %d :\n",iNo);
    for(int iCnt =(iNo/2);iCnt>=1;iCnt--)
    {
        if((iNo%iCnt)==0)
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

    FactRev(iVal);

    return 0;
}