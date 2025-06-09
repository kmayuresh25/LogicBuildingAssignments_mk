#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int Minimum(int Arr [], int iSize)
{
    int iCnt1 = 0 , iMin = Arr[0];

     for(iCnt1 = 0;iCnt1<iSize;iCnt1++)
     {
        if(iMin > Arr[iCnt1])
        {
            iMin = Arr[iCnt1];
        }
     }

    return iMin;
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
  
    iRet = Minimum(p,iLength);
    
    printf("Minimum number is  :  %d",iRet);

     free(p);

    return 0;
}
