#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void Range(int Arr [], int iSize, int iStart , int iEnd)
{
    int iCnt1 = 0 , iRange = 0;

    printf("Elements with in range of %d - %d are : ",iStart,iEnd);
    for(iCnt1 = 0;iCnt1< iSize;iCnt1++)
    {
        if((Arr[iCnt1] > iStart) && (Arr[iCnt1]< iEnd))
        {
            
           iRange =  Arr[iCnt1];
           printf("%d\t",iRange);
            
        }
        
    }
     
    
}

int main()
{
    int iLength = 0, iCnt = 0 , iVal1=0, iVal2=0;
    int *p = NULL;

    printf("Enter the number of elements :");
    scanf("%d",&iLength);

    printf("Enter Start element of range:");
    scanf("%d",&iVal1);

    printf("Enter End element of range:");
    scanf("%d",&iVal2);

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
  
    Range(p,iLength,iVal1,iVal2);

    free(p);

    return 0;
}
