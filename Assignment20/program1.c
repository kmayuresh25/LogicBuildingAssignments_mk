#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int Frequency(int Arr [], int iSize,int iNum1)
{
    int iCnt1 = 0 , iCount = 0;

    for(iCnt1 = 0;iCnt1<iSize;iCnt1++)
    {
        if((Arr[iCnt1] == iNum1))
        {
            iCount++;
        }
        
    }
     
    return iCount;
}

int main()
{
    int iLength = 0, iCnt = 0 , iRet = 0, iNum = 0;
    int *p = NULL;

    printf("Enter the number of elements :");
    scanf("%d",&iLength);

    printf("Enter the Element to chcek frequency :");
    scanf("%d",&iNum);


    p = (int *)malloc(iLength * sizeof(int));

    if(NULL == p)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        printf("Enter the element %d \n",iCnt);
        scanf("%d",&p[iCnt]);
    }
  
    iRet = Frequency(p,iLength,iNum);
    
    printf("number %d frqunecy is :  %d",iNum,iRet);

     free(p);

    return 0;
}
