/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name:  program1.c
//    Description: Accept distance in Kilometer and convert it to meter
//    Author :     Mayuresh Kaluskar
//    Date :       15/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define CONVERTER 1000
#define ERR_undefined -1

int KmtoMeter(int iNo )
{ 
   int iDistance = 0;

    if(iNo < 0)
    {
       return ERR_undefined;
    }
   
    iDistance =  iNo * CONVERTER;

   return iDistance;
}

int main ()
{ 
    int fVal = 0;
    int iRet = 0;

    printf("Enter the distance in KM: ");
    scanf("%d",&fVal);


    iRet = KmtoMeter(fVal);
    
    if(iRet == ERR_undefined)
    {
        printf(" enter valid Distance");
    }
    else
    {
         printf("Distance in meter :  %d",iRet);
    }

    return 0;
}
