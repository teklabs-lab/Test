/****************************************************************************
  GM Proprietary Information 
  TODO:  This needs to be discussed/defined by the proper legal authority
****************************************************************************/

#include "misra_c_sup.h"

int16_t gmMisraC2012R8_6;

volatile uint16_t gmMisraC2012_R2_2_v ;
char_t  *gmMisraC2012_R2_2_p ;


/**************************************************************
 MISRA Rule 5.x Support Functions
 **************************************************************/
int16_t testVar_5_8;

/**************************************************************
 MISRA Rule 7.x Support Functions
 **************************************************************/
void GM_MISRAC_2012_R7_4_support_1(const char_t *s2)
{
    int16_t x = 0;
    //nothing to do here
}

/**************************************************************
 MISRA Rule 8.x Support Functions
 **************************************************************/
void GM_MISRAC_2018_R8_4_support(int16_t x)
{
    //Do nothing
}


/**************************************************************
 MISRA Rule 17.x Support Functions
 **************************************************************/
void GM_MISRA_2012_R17_3_support_1(double d, int n)
{
    //dummy function
}

int16_t GM_MISRAC_2012_R17_7_support_1(int16_t value)
{
    int16_t retVal = 0;
    if (value >  0)
    {
        retVal = 1;
    }    
    return retVal;
}

/**************************************************************
 MISRA Rule 21.x Support Functions
 **************************************************************/
int16_t GM_MISRAC_R21_9_support_cmpfunc (const void * a, const void * b)
{
    return ( *(const int16_t*)a - *(const int16_t*)b );
}