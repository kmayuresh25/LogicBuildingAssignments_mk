#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int MultOdd(int Arr [], int iSize)
{
    int iCnt1 = 0 , iMult = 1;

    for(iCnt1 = 0;iCnt1<iSize;iCnt1++)
    {
        if((Arr[iCnt1] % 2)!=0)
        {
            iMult = iMult * Arr[iCnt1];
        }
        
    }
     
    return iMult;
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
  
    iRet = MultOdd(p,iLength);
    
    printf("Multiplication of odd element is :  %d",iRet);

     free(p);

    return 0;
}
