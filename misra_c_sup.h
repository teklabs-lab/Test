#ifndef GM_MISRA_C_SUP_h
#define GM_MISRA_C_SUP_h
#ifdef __GNUC__
#include <stdint.h>
#endif


/* The following are borrowed from stdint.h */

typedef char               char_t;
typedef signed short       sint16_t;
typedef unsigned char      bool_t;
typedef float              float32_t;

/* 
   If building under GNU C don't redefine these are there could be conflicts
   with the ones found in types.h or stdint.h
*/
#ifndef __GNUC__
typedef signed char        int8_t;
typedef signed short       int16_t;
typedef signed int         int32_t;
typedef signed long long   int64_t;
typedef unsigned char      uint8_t;
typedef unsigned short     uint16_t;
typedef unsigned int       uint32_t;
typedef unsigned long long uint64_t;
#endif

#define true (bool_t)1
#define false (bool_t)0

typedef union
{
    uint8_t byteVal[2];
    uint16_t wordVal;
    struct 
    {
        uint16_t bit1:1;
        uint16_t bit2:1;
        uint16_t bit3:1;
        uint16_t flag:4;
        uint16_t empty:9;
    }bitValues;
}MY_UNIONT_T;


/* Rule set 2 */

/* Rule set 5 */
uint16_t both123456789012345678901234567890123456789012345678901234567890A;
uint16_t both123456789012345678901234567890123456789012345678901234567890B;

/* Rule set 7 */
extern void GM_MISRAC_2012_R7_4_support_1(const char_t *s2);

/* Rule set 8 */
extern int16_t gmMisraC2012R8_5; /* Defined variable as external here */

/* Rule set 17 */
extern int16_t GM_MISRAC_2012_R17_7_support_1(int16_t value);

/* Rule set 21 */
extern int16_t GM_MISRAC_R21_9_support_cmpfunc (const void * a, const void * b);
#endif
