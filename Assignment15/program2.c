#include <stdio.h>
void Display(int iRow,int iCol)
{
    int i = 0;
    int j= 0;

    for(i=iRow;i>=1;i--)
    {
        for(j=1;j<=iCol;j++)
        {
            if(i>=j)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        }

        printf("\n");

    }

}

int main()
{
    int iVal1 = 0;
    int iVal2 = 0;
   
    printf("Enter the number of rows :");
    scanf("%d",&iVal1);

    printf("Enter the numebr of cols :");
    scanf("%d",&iVal2);
  
    Display(iVal1,iVal2);


  
    return 0;
}