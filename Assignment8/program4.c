/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name:  program1.c
//    Description: Accept temprature in Farenheit and convert it to Celsius
//    Author :     Mayuresh Kaluskar
//    Date :       15/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

double FhtoCls(float fTempFarhenheit)
{ 
   double dTempCelsius = 0;

    dTempCelsius =  ((fTempFarhenheit-32.0) * (5.0/9.0));

   return dTempCelsius;
}

int main ()
{ 
    float fVal = 0;
    double iRet = 0;

    printf("Enter the temprature in Farhenheit: ");
    scanf("%f",&fVal);


    iRet = FhtoCls(fVal);
    
    
     printf("Temprature in Celsius :  %f",iRet);

    return 0;
}
