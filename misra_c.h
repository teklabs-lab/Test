#ifndef MISRA_C_H
#define MISRA_C_H

#ifdef __GNUC__
#define GM_MISRA_C
#endif

#ifdef _MSC_VER
#define GM_MISRA_C
#endif

/* Rules 21.6 - The following include shall not be used */
#include <stdio.h>
#include <stdlib.h>

#include "misra_c_sup.h"

/* Including stdard.h to support checking of MISRA C 2012 rule 17.1 */
#include <stdarg.h>

/* Including stddef.h to support checking of MISRA C 2012 rule 18.2 */
#include <stddef.h>

/* Rule 21.2 - Following shall not be used */
#define _BUILTIN_sqrt (x) (x)
#include <math.h>

/* Rule 21.4 - Following shall not be used */
#include <setjmp.h>

/* Rule 21.5  - Following shall not be used */
#include <signal.h>

/* Rule 21.7  - Support for rule 21.7 */
#include <string.h>

/* Rule 21.10  - Following shall not be used */
#include <time.h>

/* Rule 21.11  - Following shall not be used */
#ifndef _MSC_VER
//#include <tgmath.h>
#endif

#ifdef _MSC_VER
#define INLINE  __inline
#else
#define INLINE inline
#endif

/* Declare some variables that are referenced as externs */
uint16_t gVar_2;

enum enumLight {enumRed, enumAmber, enumRed_amber, enumGreen, enumLastColor};

extern volatile uint16_t gmMisraC2012_R2_2_v ;
extern char_t  *gmMisraC2012_R2_2_p ;


/************************/
/* Function Definitions */
/************************/
static void GM_MISRAC_2012_runner(void);

/* Rule set 2  */
static enum enumLight GM_MISRAC_2012_R2_1( enum enumLight enumLightValue );
static void GM_MISRAC_2012_R2_2( void );

/* Rule set 3 */
static uint16_t GM_MISRAC_2012_R3_2(bool_t);

/* Rule set 4 */
static void GM_MISRAC_2012_R4_1(void);

/* Rule set 5 */
extern uint16_t both123456789012345678901234567890123456789012345678901234567890A;
extern uint16_t both123456789012345678901234567890123456789012345678901234567890B;

static uint16_t GM_MISRAC_2012_R5_1(uint16_t x, uint16_t y);
static void GM_MISRAC_2012_R5_2(void);
static void GM_MISRAC_2012_R5_3(void);
static void GM_MISRAC_2012_R5_4(void);
static int16_t GM_MISRAC_2012_R5_5(void);
static void GM_MISRAC_2012_R5_6(void);
static void GM_MISRAC_2012_R5_8(void);

/* Rule set 6 */
static void GM_MISRAC_2012_R6_1(void);
static void GM_MISRAC_2012_R6_2(void);


/* Rule set 7  */
static uint16_t GM_MISRAC_2012_R7_1(void);
static void GM_MISRAC_2012_R7_2(uint16_t var);
static void GM_MISRAC_2012_R7_3(void);
static void GM_MISRAC_2012_R7_4(void);

/* Rule set 8 */
static bool_t GM_MISRAC_2012_R8_1(int16_t value);
//static bool_t GM_MISRAC_2012_R8_2(int16_t GM, int16_t vec);
static bool_t GM_MISRAC_2012_R8_3(sint16_t value);
static void GM_MISRAC_2012_R8_4(void);
extern void GM_MISRAC_2012_R8_4_support(uint16_t x);

/* The following should be a violation as this variable is already declared
    external in misra_c_sup.h */
extern int16_t gmMisraC2012R8_5;
static bool_t GM_MISRAC_2012_R8_8(void);

/* Rule set 10 */
static void GM_MISRAC_2012_R10_1(void);
static uint32_t GM_MISRAC_2012_R10_2_R10_3(void);
static uint8_t GM_MISRAC_2012_R10_4(void);
static uint32_t GM_MISRAC_2012_R10_6(void);
static uint32_t GM_MISRAC_2012_R10_7(void);
static uint32_t GM_MISRAC_2012_R10_8(void);

/* Rule set 11  */
void GM_MISRAC_2012_R11_1(void);
int16_t* GM_MISRAC_2012_R11_2(void);
uint16_t* GM_MISRAC_2012_R11_3(void);
int32_t GM_MISRAC_2012_R11_4(void);
void GM_MISRAC_2012_R11_5(void *);
uint32_t GM_MISRAC_2012_R11_6(void);


uint16_t* GM_MISRAC_2012_R11_8(uint8_t param);
void GM_MISRAC_2012_R11_9(void);

/* Rule set 12  */
static uint8_t GM_MISRAC_2012_R12_2(void);

/* Rule set 13  */
static void GM_MISRAC_2012_R13_1_support_Volatile( void );
static void GM_MISRAC_2012_R13_1_support_Good( uint16_t x, uint16_t y );
static uint16_t GM_MISRAC_2012_R13_1_support_Multi( uint16_t array2[2] );
static void GM_MISRAC_2012_R13_1(void);

static uint16_t GM_MISRAC_2012_R13_2_support_add( uint16_t a, uint16_t b );
static uint16_t GM_MISRAC_2012_R13_2(void);

static uint16_t GM_MISRAC_2012_R13_5_support_1( uint16_t y );
static uint16_t GM_MISRAC_2012_R13_5_support_2( uint16_t y );
static bool_t GM_MISRAC_2012_R13_5( bool_t ishigh, uint16_t a );

static size_t GM_MISRAC_2012_R13_6( int32_t );

/* Rule set 14*/
static void GM_MISRAC_2012_R14_1(void);
static void GM_MISRAC_2012_R14_2(bool_t);
static bool_t GM_MISRAC_2012_R14_3(void);
static bool_t GM_MISRAC_2012_R14_4(int32_t);

/* Rule set 15*/
static int32_t GM_MISRAC_2012_R15_2(void);
static bool_t GM_MISRAC_2012_R15_3(int32_t);
static uint16_t GM_MISRAC_2012_R15_6(uint16_t);
static uint8_t GM_MISRAC_2012_R15_7(uint16_t);

/* Rule set 16  */
static void GM_MISRAC_2012_R16_2(uint8_t);
static void GM_MISRAC_2012_R16_3(uint8_t);
static void GM_MISRAC_2012_R16_4(uint8_t);
static void GM_MISRAC_2012_R16_5(uint8_t);
static void GM_MISRAC_2012_R16_6(uint8_t);
static uint8_t GM_MISRAC_2012_R16_7(bool_t bFlag);

/* Rule set 17 */
// TODO: Fix
void GM_MISRA_2012_R17_1A(va_list ap);
void GM_MISRA_2012_R17_1B(uint16_t n);
void GM_MISRA_2012_R17_2(void);
void GM_MISRA_2012_R17_3(void);
uint16_t GM_MISRAC_2012_R17_4(int16_t input);
/* Function purposefully commented out for rule violation */
/* void GM_MISRA_2012_R17_3_support1(double d, int n); */
#ifndef _MSC_VER
uint16_t GM_MISRAC_2012_17_6(uint16_t myArray[]);
void GM_MISRAC_2012_17_6_caller();  // Violation 8.2
#endif
void GM_MISRAC_2012_R17_7(void);

/* Rule set 18 */
uint16_t  GM_MISRAC_2012_R18_1(const uint16_t myArray[]);
uint16_t      GM_MISRAC_2012_R18_1_caller(void);
static int32_t GM_MISRAC_2012_R18_2( int32_t *);
uint16_t  GM_MISRAC_2012_R18_3(uint8_t myIndex);
uint16_t  GM_MISRAC_2012_R18_3_caller(void);
void      GM_MISRAC_2012_R18_6(void);
void GM_MISRA_2012_R18_7(void);

#ifndef _MSC_VER
void GM_MISRA_2012_R18_8(int16_t n, uint16_t a[10][2]);
#endif

/* Rule set 19 */
void      GM_MISRAC_2012_R19_1(void);

/* Rule set 20 */
void GM_MISRAC_2012_R20_2(void);
void GM_MISRAC_2012_R20_3(void);
void GM_MISRAC_2012_R20_4(void);
void GM_MISRAC_2012_R20_6(void);
uint8_t GM_MISRAC_2012_R20_7(void);
void GM_MISRAC_2012_R20_8(void);
void GM_MISRAC_2012_R20_9(void);
void GM_MISRAC_2012_R20_11(void);
void GM_MISRAC_2012_R20_12(void);
uint8_t GM_MISRAC_2012_R20_13(void);
void GM_MISRAC_2012_R20_14(void);

/* Rule set 21 */
void GM_MISRAC_2012_R21_1(void);
void GM_MISRAC_2012_R21_3(void);
uint16_t GM_MISRAC_2012_R21_7(void);
uint8_t GM_MISRAC_2012_R21_8(uint8_t test_var);
void GM_MISRAC_2012_R21_9(void);
void GM_MISRAC_2012_R21_10(void);

/* Rule set 22 */
uint8_t GM_MISRAC_2012_R22_1(void);
void    GM_MISRAC_2012_R22_2(void);
void    GM_MISRAC_2012_R22_3(void);
static void    GM_MISRAC_2012_R22_4(void);
static void    GM_MISRAC_2012_R22_5(void);
static int8_t  GM_MISRAC_2012_R22_6(void);


#endif
