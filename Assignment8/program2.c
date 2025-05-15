/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name:  program1.c
//    Description: Accept Height , width and print the area of reactangle
//    Author :     Mayuresh Kaluskar
//    Date :       15/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define ERR_undefined -1

double RectArea(float fWidth ,float fHeight)
{ 
     double dArea = 0;

    if(fWidth , fHeight < 0)
    {
       return ERR_undefined ;
    }
  
    dArea =  fWidth * fHeight;

   return dArea;
}

int main ()
{ 
    float fVal1 = 0.0;
    float fVal2 = 0.0;
    double dRet = 0.0;

    printf("Enter the Width :");
    scanf("%f",&fVal1);

    printf("Enter the Height :");
    scanf("%f",&fVal2);

    dRet = RectArea(fVal1, fVal2);
    
    if(dRet == ERR_undefined)
    {
        printf(" Height and widht are invalid");
    }else
    {
         printf("Area of Reactangle : %f",dRet);
    }

    return 0;
}
