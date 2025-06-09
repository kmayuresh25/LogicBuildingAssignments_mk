#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int Maximum(int Arr [], int iSize)
{
    int iCnt1 = 0 , iMax = Arr[0];

     for(iCnt1 = 0;iCnt1<iSize;iCnt1++)
     {
        if(Arr[iCnt1] > iMax)
        {
            iMax = Arr[iCnt1];
        }
     }

    return iMax;
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
  
    iRet = Maximum(p,iLength);
    
    printf("Maximum number is  :  %d",iRet);

     free(p);

    return 0;
}
