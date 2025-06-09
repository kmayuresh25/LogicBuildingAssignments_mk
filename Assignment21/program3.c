#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int Difference(int Arr [], int iSize)
{
    int iCnt1 = 0 , iMin = Arr[0],iMax = Arr[0];

     for(iCnt1 = 0;iCnt1<iSize;iCnt1++)
     {
        if(iMin > Arr[iCnt1])
        {
            iMin = Arr[iCnt1];
        }
        if(iMax < Arr[iCnt1])
        {
            iMax = Arr[iCnt1];
        }

     }

    return iMax-iMin;
}

int main()
{
    int iLength = 0, iCnt = 0 , iRet = 0;
    int *p = NULL;

    printf("Enter the number of elements :");
    scanf("%d",&iLength);


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
  
    iRet = Difference(p,iLength);
    
    printf("Difference betn Max and Minimum number is  :  %d",iRet);

     free(p);

    return 0;
}
