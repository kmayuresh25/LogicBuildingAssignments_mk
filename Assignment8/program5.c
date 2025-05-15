/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name:  program1.c
//    Description: Accept area in Squarefeet and convert it to Sqaremeter
//    Author :     Mayuresh Kaluskar
//    Date :       15/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define CONVERTER 0.0929

double SquareMeter(float fAreaFeet)
{ 
   double dAreasqMeter = 0.0;

    dAreasqMeter =  CONVERTER *  fAreaFeet;

   return dAreasqMeter;
}

int main ()
{ 
    float fVal = 0.0;
    double iRet = 0.0;

    printf("Enter the Area in Squarefeet : ");
    scanf("%f",&fVal);


    iRet = SquareMeter(fVal);
    
    
     printf("Area in SquareMeter :  %f",iRet);

    return 0;
}
