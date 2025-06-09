#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iSize)
{
    int iCnt1 = 0, iCount=0;

    for(iCnt1=0;iCnt1<iSize;iCnt1++)
    {
      if((Arr[iCnt1] % 11) ==0 )
      {
        printf("Multiples of 11 is  : %d : \n",Arr[iCnt1]);

      }
    }
    
   
}

int main()
{
  int iLength = 0,iCnt = 0;
  int *ptr = NULL;

  printf("Enter the Number of  Elements :");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength * sizeof(int));

 
 for(iCnt=0;iCnt<iLength;iCnt++)
 {
    printf("Enter the element :%d:",iCnt);
    scanf("%d",&ptr[iCnt]);

 }
  
 Display(ptr , iLength);

 free(ptr);  
    return 0;
}
