#include <stdio.h>
#include <stdlib.h>

int Difference (int Arr [] ,int iLength)
{
    int iCnt1 = 0, iSumOdd = 0, iSumEv = 0;
    for(iCnt1 = 0;iCnt1<iLength;iCnt1++)
    {
        if((Arr[iCnt1] % 2)==0)
        {
            iSumEv = iSumEv+Arr[iCnt1];
        }
        else
        {
            iSumOdd = iSumOdd +Arr[iCnt1];
            
        }
       

    }

    return iSumEv - iSumOdd;
}


int main()
{
    int iSize, iRet, iCnt= 0;
    int *ptr = NULL;
    
    printf("Enter the number of elements :");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(NULL == ptr)
    {
        printf("Unable to allocate memory");

        return -1;
    }

    
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("Enter the elements: ");
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Difference(ptr,iSize);

    printf("Result is : %d",iRet);

    free(ptr);
    return 0;
}