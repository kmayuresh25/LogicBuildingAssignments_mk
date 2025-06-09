#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool Check(int Arr [], int iSize)
{
    int iCnt1 = 0;
    bool bChk = true;

    for(iCnt1 = 0;iCnt1<iSize;iCnt1++)
    {
        if((Arr[iCnt1] == 11))
        {
         
            return bChk;
        }
        
    }
     
    return !bChk;
}

int main()
{
    int iLength = 0, iCnt = 0 ;
    bool bRet = false;
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
  
    bRet = Check(p,iLength);
    
    if(bRet == true)
    {
        printf("11 is present in given numbers");
    }
    else
    {
        printf("11 is not present in given numbers");
    }

    free(p);
    return 0;
}
