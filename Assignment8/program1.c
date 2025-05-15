/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name:  program1.c
//    Description: Accept radius and print the area of circle
//    Author :     Mayuresh Kaluskar
//    Date :       15/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define PI 3.14
#define ERR_Radius -1

double CircleArea(float fRadius)
{ 
     float fArea = 0;

    if(fRadius < 0)
    {
       return ERR_Radius;
    }
  
 
   fArea =  PI * fRadius * fRadius;

   return fArea;
}

int main ()
{ 
    float fVal = 0.0;
    double dRet = 0.0;

    printf("Enter the radius :");
    scanf("%f",&fVal);

    dRet = CircleArea(fVal);
    
    if(dRet == ERR_Radius)
    {
        printf(" radius is invalid");
    }else
    {
         printf("Area of cirecle : %.2f",dRet);
    }

    return 0;
}
