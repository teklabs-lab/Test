/****************************************************************************
  GM Proprietary Information
  TODO:  This needs to be discussed/defined by the proper legal authority
****************************************************************************/

#include "misra_c.h"

/* Macro definitions */
#define R18_1_ARRAY_SIZE 10
extern int maybe(void);

/* local typedefs */
typedef void (*fp16)(int16_t int16);
typedef void (*fp32)(int32_t int32);
typedef fp16 (*pfp16)(void);

/* local function prototypes */
static void GM_MISRAC_2012_R7_4_support(char_t *s1);
static char_t *GM_MISRAC_2012_R7_4_support3(void);
static const char_t *GM_MISRAC_2012_R7_4_support4(void);

static uint8_t GM_MISRAC_2012_R22_1_support(void);
static uint8_t GM_MISRAC_2012_R22_1_support2(void);

/* Local declarations */

/* Declarations for Rule set 5.1 and 5.2*/
static void *tstPtr = NULL;

/* Declaration also for Rule set 5.8*/
extern int16_t testVar_5_8;



#ifdef GM_MISRA_C
/* main is here temporarily for the compilation/linking process */
int main(void)
{
    GM_MISRAC_2012_runner();
    return 0;
}

#endif
static void GM_MISRAC_2012_runner(void)
{
    (void) GM_MISRAC_2012_R2_1( enumRed );
    GM_MISRAC_2012_R4_1();
    (void)GM_MISRAC_2012_R5_1(5,4);
    GM_MISRAC_2012_R5_2();
    GM_MISRAC_2012_R5_3();
    GM_MISRAC_2012_R5_4();
    (void)GM_MISRAC_2012_R5_5();
    GM_MISRAC_2012_R5_6();
    GM_MISRAC_2012_R5_8();
    GM_MISRAC_2012_R6_1();
    GM_MISRAC_2012_R6_2();
    (void)GM_MISRAC_2012_R7_1();
    {
      GM_MISRAC_2012_R7_2(0);
    }
    GM_MISRAC_2012_R7_2(1);
    GM_MISRAC_2012_R7_3();
    GM_MISRAC_2012_R7_4();
    (void)GM_MISRAC_2012_R8_1(16);
    (void)GM_MISRAC_2012_R8_8();

    GM_MISRAC_2012_R11_1();
    (void)GM_MISRAC_2012_R11_2();
    (void)GM_MISRAC_2012_R11_3();
    (void)GM_MISRAC_2012_R11_4();
    GM_MISRAC_2012_R11_5(tstPtr);
    (void)GM_MISRAC_2012_R11_6();

    (void)GM_MISRAC_2012_R11_8(0);
    GM_MISRAC_2012_R11_9();

    (void) GM_MISRAC_2012_R12_2();
    (void) GM_MISRAC_2012_R13_6(13);

    GM_MISRAC_2012_R14_1();
    GM_MISRAC_2012_R14_2(true);
    (void) GM_MISRAC_2012_R14_3();
    (void) GM_MISRAC_2012_R14_4(3);

    (void) GM_MISRAC_2012_R15_2();
    (void) GM_MISRAC_2012_R15_3(3);
    (void) GM_MISRAC_2012_R15_6(3);
    (void) GM_MISRAC_2012_R15_7(3);

    GM_MISRAC_2012_R16_2(3);
    GM_MISRAC_2012_R16_3(3);
    GM_MISRAC_2012_R16_4(3);
    GM_MISRAC_2012_R16_5(3);
    GM_MISRAC_2012_R16_6(3);
    (void) GM_MISRAC_2012_R16_7(true);

    {
      (void)GM_MISRAC_2012_R18_1_caller();
    }
    (void)GM_MISRAC_2012_R18_3(0);
    GM_MISRAC_2012_R18_6();
    GM_MISRAC_2012_R21_3();
    (void)GM_MISRAC_2012_R21_7();
    GM_MISRAC_2012_R21_8(3);
    {
      GM_MISRAC_2012_R21_9();
    }
    GM_MISRAC_2012_R21_10();
    (void)GM_MISRAC_2012_R22_1();
    GM_MISRAC_2012_R22_2();
    GM_MISRAC_2012_R22_3();

}

/* Functions to follow*/

/*  *******************************************************************  */
/*  Rule 2.1                                                             */
/*  A project shall not contain unreachable code                         */
/*  *******************************************************************  */
static enum enumLight GM_MISRAC_2012_R2_1(enum enumLight enumLightValue)
{
    enum enumLight tmpEnumResult = enumLastColor;

    switch ( enumLightValue )
    {
        case enumRed :
            tmpEnumResult = enumRed_amber ;
            break ;
        case enumRed_amber :
            tmpEnumResult = enumGreen ;
            break ;
        case enumGreen :
            tmpEnumResult = enumAmber ;
            break ;
        case enumAmber :
            tmpEnumResult = enumRed ;
            break ;
        default :
            // Nothing to do here
            break ;
    }
    return ( tmpEnumResult ) ;
    tmpEnumResult = enumRed;    /* Violation; unreachable code */
}

/*  *************************************************************/
/*  Rule 2.2                                                    */
/*  A project shall not contain dead code                       */
/*                                                              */
/*  This rule violation is detected as part of rule 10.1        */
/*  *************************************************************/



/*  *******************************************************************  */
/*  Rule 3.1                                                             */
/*  The character sequences /* and // shall not be used within a comment */
/*  The above line is non-compliant comment                              */
/*  *******************************************************************  */


/*  *******************************************************************  */
/*  Rule 3.2                                                             */
/*  Line-splicing shall not be used in // comment                        */
/*  *******************************************************************  */
static uint16_t GM_MISRAC_2012_R3_2(bool_t b)
{
    /*Non-compliant, if(b) is logically part of the first line below */
    uint16_t  x = 0;   // comment \
    if ( b )
    {
        ++x;             /* This is always executed */
    }
    return x;
}


/*  *******************************************************************  */
/*  Rule 4.1                                                             */
/*  Octal and hexadecimal escape sequences shall be terminated           */
/*  *******************************************************************  */
static void GM_MISRAC_2012_R4_1(void)
{
    const char_t *s2 = "\x41\x67";   /* Compliant - terminated by another escape */
    const char_t *s3 = "\x4g";      /* Non-compliant  */

}

/*  *******************************************************************  */
/*  Rule 5.1                                                             */
/*  External identifiers shall be distinct                               */
/*  *******************************************************************  */
static uint16_t GM_MISRAC_2012_R5_1(uint16_t x, uint16_t y)
{
    uint16_t retVal;
     /*  - 'Non-distinct Identifiers: Same Scope' warning issued for both C90 and C99 */
    both123456789012345678901234567890123456789012345678901234567890A = x;
    both123456789012345678901234567890123456789012345678901234567890B = y;

    if (both123456789012345678901234567890123456789012345678901234567890A >
    both123456789012345678901234567890123456789012345678901234567890B)
    {
        retVal = x;
    }
    else
    {
        retVal = y;
    }
    return retVal;
}

/*  *******************************************************************  */
/*  Rule 5.2                                                             */
/*  Identifiers declared in the same scope and name space shall be       */
/*  distinct                                                             */
/*  *******************************************************************  */
static void GM_MISRAC_2012_R5_2(void)
{
    /*      1234567890123456789012345678901*****   */
    int16_t engine_exhaust_gas_temperature_unfiltered;
    int16_t engine_exhaust_gas_temperature_local;      /* Non-compliant  */

    engine_exhaust_gas_temperature_unfiltered = 200;
    engine_exhaust_gas_temperature_local = engine_exhaust_gas_temperature_unfiltered;

}

/*  ********************************************************************/
/*  Rule 5.3                                                           */
/*  An identifier declared in an inner scope shall not hide an         */
/*  identifier declared in an outer scope                              */
/*                                                                     */
/*  ********************************************************************/
static void GM_MISRAC_2012_R5_3(void)
{
    int16_t engine_exhaust_temp;  /* Declare outer object */

    {
        int16_t engine_exhaust_temp;  /* Declare inner object, hides outer object */
        engine_exhaust_temp = 0;
    }

    engine_exhaust_temp = 100;

}

/*  *******************************************************************  */
/*  Rule 5.4                                                             */
/*  Macro identifiers shall be distinct                                  */
/*                                                                       */
/*  *******************************************************************  */
static void GM_MISRAC_2012_R5_4(void)
{
 /*  - 'Non-distinct Identifiers: Macro/Macro' warning issued for both C90 and C99 */
    #define macroboth123456789012345678901234567890123456789012345678901234567890A 1
    #define macroboth123456789012345678901234567890123456789012345678901234567890B 1

}

/*  *******************************************************************  */
/*  Rule 5.5                                                             */
/*  Identifiers shall be distinct from macro names                       */
/*                                                                       */
/*  *******************************************************************  */
static int16_t GM_MISRAC_2012_R5_5(void)
{
    /*      123456789012345678901234567890123456789012345678901234567890123456*****   */
    #define low_pressure_turbine_temperatur_low_pressure_turbine_temperature_21     120
    /* Non-compliant  */
    int16_t low_pressure_turbine_temperatur_low_pressure_turbine_temperature_22;

    low_pressure_turbine_temperatur_low_pressure_turbine_temperature_22 = 50;

    return low_pressure_turbine_temperatur_low_pressure_turbine_temperature_22;
}

/*  *******************************************************************  */
/*  Rule 5.6                                                             */
/*  A typedef name shall be a unique identifier                          */
/*                                                                       */
/*  *******************************************************************  */
static void GM_MISRAC_2012_R5_6(void)
{
    typedef int16_t BASE_INTEGER;
    {
        typedef int16_t BASE_INTEGER;   /* Non-compliant */
    }


}
/*  *******************************************************************  */
/*  Rule 5.7                                                             */
/*  A tag name shall be a unique identifier                              */
/*  Removed as it does not compile under VS or GNU C/C++                 */
/*  *******************************************************************  */


/*  *******************************************************************  */
/*  Rule 5.8                                                             */
/*  Identifiers that define objects or functions with external linkage   */
/*  shall be unique                                                      */
/*                                                                       */
/*  *******************************************************************  */
static void GM_MISRAC_2012_R5_8(void)
{
    {
        int8_t testVar_5_8;   /* Non-compliant */
        testVar_5_8 = 9;
    }
}


/**************************************************************
 MISRA Rule 6.1
 **************************************************************/
static void GM_MISRAC_2012_R6_1(void)
{
    struct bitvalues {
        uint32_t  b1:2; /* compliant */
        int32_t   b2:2; /* non-compliant */
        uint32_t  b3:2; /* compliant */
        uint32_t  b4:2; /* compliant */
    };
}

/**************************************************************
 MISRA Rule 6.2
 **************************************************************/
static void GM_MISRAC_2012_R6_2(void)
{
    struct widthstruct{
      int32_t b1: 2;
      int32_t b2: 1; /* 'Bit-field Too Short' warning issued here */
      int32_t b3:29;
    };
}

/*  *******************************************************************  */
/*  Rule 7.1                                                             */
/*  Octal constants shall not be used                                    */
/*  *******************************************************************  */
static uint16_t GM_MISRAC_2012_R7_1(void)
{
    #define OCTAL_MACRO 040
    uint16_t myValue;

    myValue = OCTAL_MACRO; //non-compliant octal
    return myValue;
}

/*  *******************************************************************  */
/*  Rule 7.2                                                             */
/*  a "u" or "U" suffix shall be applied to all integer constants that   */
/*  represented in an unsigned type                                      */
/*  *******************************************************************  */
static void GM_MISRAC_2012_R7_2(uint16_t var)
{
    static uint16_t myUint16;
    static int16_t myInt16;

    if (0u == var)   /* Compliant code */
    {
        myUint16 = 0x6005u;
        myInt16 = 0x8005;
    }
    else            /* Non compliant */
    {
        myUint16 = 0x8005;
        myInt16 = 0x6500u;
    }
}

/*  *******************************************************************  */
/*  Rule 7.3                                                             */
/*  The lower case character "l" shall not be used in a literal suffix   */
/*  *******************************************************************  */
static void GM_MISRAC_2012_R7_3(void)
{
    static uint64_t myUint64;

    myUint64 = 123lu;  /* non-compliant */
}

/*  *******************************************************************  */
/*  Rule 7.4                                                             */
/*  A string literal shall not be assigned to an object unless the       */
/*  object's type is "pointer to const-qualified char"                   */
/*  *******************************************************************  */
static void GM_MISRAC_2012_R7_4(void)
{
    char_t *s = "string";  //non-compliant

    GM_MISRAC_2012_R7_4_support_1("Hello"); //compliant
}

/*  Ruleset 8
  ______
 /  __  \
 >      <
/   --   \
\______  /
       \/
*/

/************************************************************************/
/*       Rule 8.1                                                       */
/* Types shall be explicitly specified                                  */
/************************************************************************/
static bool_t GM_MISRAC_2012_R8_1(int16_t value)
{
    const int16_t compliant = 0;    /* Compliant code               */
    const noncompliant = 1;         /* Non-Compliant declaration    */
    bool_t retVal = false;

    if (compliant != value)
    {
        retVal = true;
    }
    else
    {
    }
    return retVal;
}

/************************************************************************/
/*       Rule 8.2                                                       */
/* Function types shall be in prototype form with named parameters      */
/* Removed;  does not compile VS and GNU C/C++                          */
/************************************************************************/


/************************************************************************/
/*       Rule 8.3                                                       */
/* All declarations of an object or function shall use the same names   */
/* and type qualifiers                                                  */
/************************************************************************/
/* Non Compliant:  Declaration is ..M_MISRAC_2012_R8_3(sint16_t value) */
static bool_t GM_MISRAC_2012_R8_3(int16_t value)
{
    bool_t retVal = false;
    if (0 == value)
    {
        retVal = true;
    }
    else
    {
    }
    return retVal;
}

/************************************************************************/
/*       Rule 8.4                                                       */
/* A compatible declaration shall be visible when an object or function */
/* with external linkage is defined                                     */
/************************************************************************/
/* This not compliant code as it has not previously been declared */
extern uint16_t gVar_1 = 1000u; /* Non Compliant code */

/************************************************************************/
/*       Rule 8.5                                                       */
/* An external object or function shall be declared once in one and only*/
/* on file                                                              */
/************************************************************************/
static bool_t GM_MISRAC_2012_R8_5(uint16_t value)
{
    bool_t retVal = false;
    extern uint16_t gVar_2;           /* Non Compliant Code */

    gVar_2 = 1000u;                   /* Compliant code */
    if (0u == value)
    {
        retVal = true;
    }
    else
    {
    }
    return retVal;
}
/************************************************************************/
/*       Rule 8.6                                                       */
/* An identifier with external linkage shall have exactly one external  */
/* definition                                                           */
/************************************************************************/
int16_t gmMisraC2012R8_6 = 0; /* Non Compliant */
/* Variable is also defined in misra_c_sup.c   */

/************************************************************************/
/*       Rule 8.8                                                       */
/* The static storage class specifier shall be used in all the          */
/* declarations of objects and functions that have internal linkage     */
/************************************************************************/
bool_t GM_MISRAC_2012_R8_8(void)
{
    return false;
}

/************************************************************************/
/*       Rule 8.10                                                      */
/* An inline function shall be declared with the static storage class   */
/************************************************************************/
INLINE bool_t GM_MISRAC_2012_R8_10(int16_t value)
{
    bool_t retVal = false;
    if (0 == value)
    {
        retVal = true;
    }
    else
    {
    }
    return retVal;
}

/************************************************************************/
/*       Rule 8.12                                                      */
/* Within an enumerator list, the value of an implicitly-specified      */
/* enumeration constant shall be unique                                 */
/************************************************************************/
enum gmMisraC2012R8_12 {red = 3, blue, green, yellow = 5};

/************************************************************************/
/*       Rule 8.14                                                      */
/* The restrict type qualifier shall not be used                        */
/* Removed; does not compile under VS or GNU C/C++                      */
/************************************************************************/

/************************************************************************/
/*       Rule 9.1                                                       */
/* The value of an object with automatic storage duration shall not be  */
/* read before it has been set                                          */
/* Removed; does not compile under VS or GNU C/C++                      */
/************************************************************************/

/**************************************************************************/
/*     Rule 9.2                                                           */
/* The initializer for an aggregate or union shall be enclosed in braces  */
/**************************************************************************/

static void GM_MISRAC_2012_R9_2(void)
{
    uint16_t y1[3][2] = {1, 2, 3, 4, 5, 6};          /* Non compliant */
    uint16_t y2[3][2] = { {1, 2}, {3, 4}, {5, 6} };  /*  compliant */
}

/**********************************************/
/*     Rule 9.3                               */
/* Arrays shall not be partially initialized  */
/**********************************************/

static void GM_MISRAC_2012_R9_3(void)
{
    uint16_t y1[3] = {1, 2, 3};  /*  compliant */
    uint16_t y2[3] = {1, 2};     /*  Non compliant */
}


/********************************************************************/
/*  Rule 9.4                                                        */
/*  An element of an object shall not be initialized more than once */
/********************************************************************/
#ifndef _MSC_VER
static void GM_MISRAC_2012_R9_4(void)
{
    uint16_t a2[5] = { [0]=5, [1]=4, [2]=3, [3]=2, [4]=1 };    /*  compliant */
    uint16_t a3[5] = { [0]=5, [1]=4, [2]=3, [2]=2, [4]=1 };    /*  Not-compliant, element [2] is initialized twice */
}
#endif

/****************************************************************************/
/* Rule 9.5                                                                 */
/* Where designated initializers are used to initialize an array object the */
/* size of the array shall be specified explicitly                          */
/****************************************************************************/
#ifndef _MSC_VER
static void GM_MISRAC_2012_R9_5(void)
{

   uint16_t a2[1] = { [0] = 71 };    /* compliant */
   uint16_t a1[]  = { [0] = 1 };     /* not compliant */

}
#endif

/**************************************************************
 MISRA Rule 10.1
 **************************************************************/
static void GM_MISRAC_2012_R10_1(void)
{
    enum enuma { a1, a2, a3 } ena;

    ena--; /* not compliant */
}

/**************************************************************
 MISRA Rule 10.2, and 10.3
 **************************************************************/
static uint32_t GM_MISRAC_2012_R10_2_R10_3(void)
{
    float32_t f32a = 0.0; /* not compliant 10.3 */

    f32a = '0' + f32a; /* not compliant 10.2 */

    return f32a; /* not compliant 10.3 */
}

/**************************************************************
 MISRA Rule 10.4
 **************************************************************/
static uint8_t GM_MISRAC_2012_R10_4(void)
{
    uint8_t u8a, u8b;
    u8a = 0;

    u8b = u8a + 2; /* not compliant 10.4 */

    return u8b;
}

/**************************************************************
 MISRA Rule 10.6
 **************************************************************/
static uint32_t GM_MISRAC_2012_R10_6(void)
{
    uint16_t u16a = 1, u16b = 2;
    uint32_t u32a = 0;

    u32a = u16a + u16b; /* not compliant 10.6 */

    return u32a;
}

/**************************************************************
 MISRA Rule 10.7
 **************************************************************/
static uint32_t GM_MISRAC_2012_R10_7(void)
{
    uint16_t u16a = 1, u16b = 2;
    uint32_t u32a = 0;

    u32a += (u16a + u16b); /* not compliant 10.7 */

    return u32a;
}

/**************************************************************
 MISRA Rule 10.8
 **************************************************************/
static uint32_t GM_MISRAC_2012_R10_8(void)
{
    sint16_t u16a = 1, u16b = 2;
    uint32_t u32a;

    u32a = ( uint32_t ) ( u16a + u16b ); /* not compliant */

    return u32a;
}

/********************************************************************/
/* Rule 11.1                                                        */
/* Conversions shall not be performed between a pointer to a        */
/* function and any other type                                      */
/********************************************************************/
void GM_MISRAC_2012_R11_1(void)
{
    static fp16 myFp16   = NULL; //compliant exception
    static fp32 myFp32   = NULL;

    myFp32 = (fp32)myFp16;  //non-compliant
}

/********************************************************************/
/* Rule 11.2                                                        */
/* Conversions shall not be performed between a pointer to an       */
/* incomplete type and any other type                               */
/********************************************************************/
int16_t* GM_MISRAC_2012_R11_2(void)
{
    struct struct1;

    struct struct1 *s1ptr=NULL;
    int16_t *int16Ptr;

    int16Ptr = (int16_t*)s1ptr;        //non-compliant

    return int16Ptr;
}

/********************************************************************/
/* Rule 11.3                                                        */
/* A cast shall not be performed between a pointer to object type   */
/* and a pointer to a different object type                         */
/********************************************************************/
uint16_t* GM_MISRAC_2012_R11_3(void)
{
    uint32_t myVar = 0;
    uint16_t *u16ptr;

    u16ptr = (uint16_t*)&myVar;  //non-compliant

    return u16ptr;
}

/********************************************************************/
/* Rule 11.4                                                        */
/* A conversion should not be performed between a pointer to object */
/* and an integer type                                              */
/********************************************************************/
int32_t GM_MISRAC_2012_R11_4(void)
{
    uint16_t *u16ptr;
    int32_t ptrAddr = (int32_t)&u16ptr; //non-compliant

    return ptrAddr;
}

/********************************************************************/
/* Rule 11.5                                                        */
/* A conversion should not be performed from pointer to void into   */
/* pointer to object                                                */
/********************************************************************/
void GM_MISRAC_2012_R11_5(void *voidPtr)
{
    uint16_t *u16Ptr;

    u16Ptr = voidPtr;              //non-compliant

}

/********************************************************************/
/* Rule 11.6                                                        */
/* A cast shall not be performed between pointer to void and an     */
/* arithmetic type                                                  */
/********************************************************************/
uint32_t GM_MISRAC_2012_R11_6(void)
{
    void *voidPtr = NULL;
    uint32_t u32;

    u32 = (uint32_t)voidPtr;       //non-compliant

    return u32;
}

/********************************************************************/
/* Rule 11.7                                                        */
/* A cast shall not be performed between pointer to object and a    */
/* non-integer arithmetic type                                      */
/* Removed as it does not compile under VS or GNU C/C++             */
/********************************************************************/

/********************************************************************/
/* Rule 11.8                                                        */
/* A cast shall not remove any const or volatile qualification from */
/* the type pointed to by a pointer                                 */
/********************************************************************/
uint16_t* GM_MISRAC_2012_R11_8(uint8_t param)
{
    uint16_t          u16 = 0;
    uint16_t * const  u16ConstPtr = &u16;
    const uint16_t    *u16PtrToConst = NULL;
    uint16_t          *u16Ptr;

    if((uint8_t)0 == param)
    {
        u16Ptr = u16ConstPtr;                          //compliant
    }
    else
    {
        u16Ptr = (uint16_t*)u16PtrToConst;             //non-compliant
    }

    return u16Ptr;
}

/********************************************************************/
/* Rule 11.9                                                        */
/* The macro NULL shall be the only permitted form of integer null  */
/* pointer constant                                                 */
/********************************************************************/
void GM_MISRAC_2012_R11_9(void)
{
    int32_t *i32Ptr = 0;         //non-compliant
    int32_t *i32Ptr2 = (void*)0;  //compliant
}

/********************************************************************/
/* Rule 12.2                                                        */
/* The right hand operand of a shift operator shall lie in the      */
/* range of zero to one less than the width in bits of the          */
/* essential type of the left hand operand.                         */
/********************************************************************/
static uint8_t GM_MISRAC_2012_R12_2(void)
{
    uint8_t  u8a = 2 ;

    u8a = u8a << 8 ;

    return ( u8a );
}

/********************************************************************/
/* Rule 13.1                                                        */
/* Initializer lists  shall not contain persistent side effects.    */
/********************************************************************/
volatile uint16_t gMisra_C_2012_R13_1_Volatile1;

static void GM_MISRAC_2012_R13_1_support_Volatile( void )
{
    uint16_t a[ 2 ] = { gMisra_C_2012_R13_1_Volatile1, 0 };
    a[1] = a[1] + 1u;
}

static void GM_MISRAC_2012_R13_1_support_Good( uint16_t x, uint16_t y )
{
    uint16_t a[ 2 ] = { x + y, x - y };
    a[0] = a[0] + a[1];
}

static uint16_t GM_MISRAC_2012_R13_1_support_Multi( uint16_t array2[2] )
{
    uint16_t temp;
    temp = array2[0] + array2[1];
    return temp;
}

static void GM_MISRAC_2012_R13_1(void)
{
    uint16_t lParam1 = 0u;
    uint16_t lParam2 = 0u;
    uint16_t tempArr[ 2 ] =  { lParam1++, lParam2++ };

    /* Compliant - no side effects  */
    GM_MISRAC_2012_R13_1_support_Good(lParam1, lParam2);

    /* Non-compliant - volatile access is persistent side effect */
    GM_MISRAC_2012_R13_1_support_Volatile();

    /* Non-compliant - two side effects */
    GM_MISRAC_2012_R13_1_support_Multi( tempArr );

//#ifndef _MSC_VER
//    GM_MISRAC_2012_R13_1_support_Multi( ( uint16_t[ 2 ] ) { lParam1++, lParam1++ } );
//#endif
}


/********************************************************************/
/* Rule 13.2                                                        */
/* The value of an expression and its persistent side effects shall */
/* be the same under all permitted evaluation orders.               */
/********************************************************************/
static uint16_t GM_MISRAC_2012_R13_2_support_add( uint16_t a, uint16_t b )
{
    return (a+b);
}

static uint16_t GM_MISRAC_2012_R13_2(void)
{
    uint16_t i = 0u;
    uint16_t nRet = 0u;

    /* Non-compliant: unspecified whether it is                                             */
    /* GM_MISRAC_2012_R13_2_support_add( 0, 0 ) or GM_MISRAC_2012_R13_2_support_add( 0, 1 ) */
    nRet += GM_MISRAC_2012_R13_2_support_add( i++, i );

    return nRet;
}


/********************************************************************/
/* Rule 13.5                                                        */
/* The right hand operand of a logical && or || operator shall not  */
/* contain persistent side effects.                                 */
/********************************************************************/
static uint16_t GM_MISRAC_2012_R13_5_support_2( uint16_t y )
{
    static uint16_t temp = 0;
    /* This side effect is persistent as seen by the caller */
    temp = y + temp;
    return temp;
}

static bool_t GM_MISRAC_2012_R13_5( bool_t ishigh, uint16_t a )
{
    uint16_t x = 0u;
    bool_t retVal = 0;

    /* Non-compliant - persistent side effect */
    if ( (ishigh != (bool_t)0 ) && ( a == GM_MISRAC_2012_R13_5_support_2( x ) ) )
    {
        retVal = (bool_t) 0;
    }


    return retVal;
}


/********************************************************************/
/* Rule 13.6                                                        */
/* The operand of the sizeof operator shall not contain any         */
/* expression which has potential side effects.                     */
/********************************************************************/
static size_t GM_MISRAC_2012_R13_6( int32_t n )
{
    size_t  s = 0;

    s = s + sizeof( n++ );              /* Non-compliant         */
    return s;
}


/********************************************************************/
/* Rule 14.1                                                        */
/* A loop counter shall  not have essentially floating type         */
/********************************************************************/
static void GM_MISRAC_2012_R14_1(void)
{
    uint32_t counter = 0u;
    float32_t fCounter;

    for ( fCounter = 0.0f; fCounter < 1.0f; fCounter = fCounter + 0.001f)
    {
        ++counter;
    }
}


/********************************************************************/
/* Rule 14.2                                                        */
/* A for loop shall be well-formed                                  */
/********************************************************************/
static void GM_MISRAC_2012_R14_2(bool_t bParam1)
{
    int16_t i = 0;

    for ( i = 1;  i < 5 ; i++ )
    {
        if ( bParam1 == true )
        {
            i = 5;    /* Non-compliant - altering the loop counter    */
        }
    }
}


/********************************************************************/
/* Rule 14.3                                                        */
/* Controlling expressions shall not be invariant                   */
/********************************************************************/
static bool_t GM_MISRAC_2012_R14_3(void)
{
    bool_t bRet = false;
    uint16_t u16a = 1;
    int8_t s8a = 0;


    while ( ( s8a > 10 ) && ( s8a < 13) )
    {
        if ( s8a > 5 ) /* Non-compliant - s8a not volatile */
        {
            bRet = true;
        }
        s8a++;
    }


    return bRet;
}


/*************************************************************************************/
/* Rule 14.4                                                                         */
/* The controlling expression of an if statement and the controlling expression      */
/* of an iteration-statement shall have essentially Boolean type                     */
/*************************************************************************************/
static bool_t GM_MISRAC_2012_R14_4(int32_t nParam)
{
    bool_t bRet=false;


    if ( nParam )              /* Non-compliant, integer */
    {
        bRet = true;
    }
    else
    {
        bRet = false;
    }

    return bRet;
}


/*************************************************************************************/
/* Rule 15.2                                                                         */
/* The goto statement shall jump to a label declared later in the same function      */
/*************************************************************************************/
static int32_t GM_MISRAC_2012_R15_2(void)
{
      int32_t j = 0;

R15_2_L1:   ++j;

      if ( 10 == j )
      {
          goto R15_2_L2;   /* Compliant, jumping forward  */
      }

      goto R15_2_L1;       /* Non-compliant, jumping back */

R15_2_L2 :  ++j;

      return j;
}


/*************************************************************************************/
/* Rule 15.3                                                                         */
/* Any label referenced by a goto statement shall be declared in the same block,     */
/* or in any block enclosing the goto statement                                      */
/*************************************************************************************/
static bool_t GM_MISRAC_2012_R15_3(int32_t nParam)
{
    bool_t bRet = false;

    if ( nParam < 0 )
    {
        goto L1;          /* Non-compliant */
    }

    if ( nParam > 0 )
    {
        bRet = true;
    }
    else
    {
L1:     bRet = false;
    }

    return bRet;
}


/********************************************************************/
/* Rule 15.6                                                        */
/* The body of an iteration-statement or a selection-statement      */
/* shall be a compound-statement                                    */
/********************************************************************/
static uint16_t GM_MISRAC_2012_R15_6(uint16_t uCounter)
{
    uint16_t uTempCounter = 0u;

    while ( uCounter > 0u )
        uCounter--;               /* Non-compliant */
        uTempCounter++;

     return uTempCounter;
}


/************************************************************************/
/* Rule 15.7                                                            */
/* All if-else-if constructs shall be terminated with an else statement */
/************************************************************************/
static uint8_t GM_MISRAC_2012_R15_7(uint16_t uCounter)
{
    uint8_t uRet = 2u;
    if ( uCounter == 0u )
    {
        uRet = 0u;
    }
    else if ( uCounter >= 10u )
    {
        uRet = 1u;
    }

    return uRet;
}


/********************************************************************/
/* Rule 16.2                                                        */
/* The switch label shall only be used when the most closely-       */
/* enclosing compound statement is the body of a switch statement. */
/********************************************************************/
static void GM_MISRAC_2012_R16_2(uint8_t u8a)
{
    bool_t  flag = true;

    switch ( u8a )
    {
        case 1u:
            if ( flag )
            {
        case 2u:
            u8a = 1 ;
            }
            break;
        default:
            break;
    }

}

/********************************************************************/
/* Rule 16.3                                                        */
/* An unconditional break statement shall terminate every           */
/* switch-clause.                                                   */
/********************************************************************/
static void GM_MISRAC_2012_R16_3(uint8_t u8a)
{
    uint8_t  u8b = 6 ;

    switch ( u8a )
    {
        case 0u:
            break;
        case 1u:
        case 2u:
            break;
        case 4u:
            u8a = 5 ;
            break;
        case 5u:
            if ( u8a == u8b )
            {
                ++u8a ;
                break ; /* Not compliant */
            }
        default:
            break ;
    }
}

/********************************************************************/
/* Rule 16.4                                                        */
/* Every switch statement shall have a default label.               */
/********************************************************************/
static void GM_MISRAC_2012_R16_4(uint8_t u8a)
{
    switch ( u8a )
    {
        case 0u:
            ++u8a ;
            break;
        case 1u:
        case 2u:
            break;
    }
}

/********************************************************************/
/* Rule 16.5                                                        */
/* The default label shall appear as either the first or last       */
/* switch label of the switch statement.                            */
/********************************************************************/
static void GM_MISRAC_2012_R16_5(uint8_t  u8a)
{
    switch ( u8a )
    {
        case 0u:
            ++u8a ;
         break;
        default:
         break;
        case 1u:
        case 2u:
            break;
    }
}

/********************************************************************/
/* Rule 16.6                                                        */
/* Every switch statement shall have at least two switch-clauses.   */
/********************************************************************/
static void GM_MISRAC_2012_R16_6(uint8_t u8a)
{
    switch ( u8a )
    {
        default:
            u8a = 0 ;
         break;
    }
}

/********************************************************************/
/* Rule 16.7                                                        */
/* The switch-expression shall not have essentially Boolean type.   */
/********************************************************************/
static uint8_t GM_MISRAC_2012_R16_7(bool_t bFlag)
{
    uint8_t ret;
    switch ( bFlag )
    {
        case false:
            ret = 1;
          break;
        default:
            ret = 2;
          break;
    }

    return ret;
}


/*
Ruleset 17
 _____________
/_   \______  \
 |   |   /    /
 |   |  /    /
 |___| /____/
*/
/***************************************************************/
/* Rule 17.1    The features of <stdarg.h> shall not be used */
/***************************************************************/

/*#include <stdarg.h> has been placed at the top of the file */


/***************************************************************
 * Rule 17.2    Functions shall not call themselves, either
 * directly or indirectly
 ***************************************************************/
/* DO NOT CALL THIS FUNCTION!!! */
void GM_MISRA_2012_R17_2(void)
{
    GM_MISRA_2012_R17_2();              /* Non-compliant */
}

/***************************************************************/
/* Rule 17.3    A function shall not be declared implicitly    */
/* Removed; does not compile under VS or GNU C/C++             */
/***************************************************************/

/***************************************************************/
/* MISRA Rule 17.4 All exit paths from a function with non-void*/
/* return type shall have an explicit return statement with an */
/* expression                                                  */
/***************************************************************/
uint16_t GM_MISRAC_2012_R17_4(int16_t input)
{
    if ( input < 0 )
    {
        return; /*Non-compliant because there is no explicit return value */
    }
    return (uint16_t) input;
}

/***************************************************************/
/* Rule 17.6 The declaration of an array parameter shall not   */
/* contain the static keyword between the []                   */
/* Removed; does not compile under VS or GNU C/C++             */
/***************************************************************/

/**************************************************************
 MISRA Rule 17.7 The value returned by a function having
 non-void return type shall be used
 **************************************************************/
void GM_MISRAC_2012_R17_7(void)
{
    int16_t returnedValue;


    returnedValue = GM_MISRAC_2012_R17_7_support_1(-72);  /*  Compliant return value is consumed */
    if ( returnedValue < 0 )
    {
        ( void ) GM_MISRAC_2012_R17_7_support_1(10);  /* Compliant explictly ignoring  returned value */
    }
    else
    {
        GM_MISRAC_2012_R17_7_support_1(15); /* Non-compliant because return value is ignored */
    }
}


/*
Ruleset 18
 ____   ______
/_   | /  __  \
 |   | >      <
 |   |/   --   \
 |___|\______  /
             \/
*/

/***************************************************************/
/* Rule 18.1 A pointer resulting from arithmetic on a pointer  */
/* operand shall address an element of the same array as that  */
/* pointer operand                                             */
/***************************************************************/
uint16_t GM_MISRAC_2012_R18_1(const uint16_t myArray[R18_1_ARRAY_SIZE])
{
    uint16_t myReturn;

    myReturn = myArray[-1]; /* non compliant.  Out of bounds */

    return myReturn;
}

uint16_t GM_MISRAC_2012_R18_1_caller(void)
{
    uint16_t returnVal;
    uint16_t paramArray[R18_1_ARRAY_SIZE];

    returnVal = GM_MISRAC_2012_R18_1(paramArray);

    return returnVal;
}

/********************************************************************/
/* Rule 18.2                                                        */
/* Subtraction between pointers shall only be applied to pointers   */
/* that address elements of the same array                          */
/********************************************************************/
static int32_t GM_MISRAC_2012_R18_2( int32_t *pParam )
{
    int32_t   a1[ 10 ];
    int32_t   a2[ 10 ];
    int32_t   *p1 = a1;
    int32_t   *p2 = a2;
    int32_t diff1, diff2, diff3;
    int32_t nRet;

    diff1 = p1 - &(a1[1]);     /* Compliant     */
    diff2 = p1 - p2;           /* Non-compliant */
    diff3 = p1 - pParam;       /* Non-compliant */
    nRet = diff1 + diff2 + diff3;
    return nRet;
}

/***************************************************************/
/* Rule 18.3 The relational operators >, >=, < and <= shall not*/
/* be applied to objects of pointer type except where they     */
/* point into the same object                                  */
/***************************************************************/
uint16_t GM_MISRAC_2012_R18_3(uint8_t myIndex)
{
    uint16_t myArray1[5];
    uint16_t myArray2[10];
    uint16_t *myPtr;
    uint16_t myReturn;

    myPtr = &myArray1[myIndex];

    if(myPtr < &myArray1[4]) /* compliant */
    {
        myReturn = 0;
    }
    else if(myPtr < &myArray2[4])  /* non-compliant */
    {
        myReturn = 1;
    }
    else
    {
        myReturn = 2;
    }

    return myReturn;
}

/***************************************************************/
/* Rule 18.6 The address of an object with automatic storage   */
/* shall not be copied to another object that persists after   */
/* the first object has ceased to exist                        */
/***************************************************************/
void GM_MISRAC_2012_R18_6(void)
{
    static uint16_t *myStaticPtr;
    uint16_t myReturn;

    myStaticPtr = &myReturn; /* non-compliant */
}

/***************************************************************/
/* Rule 18.8    Variable-length array types shall not be used  */
/***************************************************************/
#ifndef _MSC_VER
void GM_MISRA_2012_R18_8(int16_t n, uint16_t a[10][n])  /* Non-compliant */
{
    n = -1;
    uint16_t vla [n];               /* Non-compliant - Undefined if n <=0 */
}
#endif


/***************************************************************/
/* Rule 19.1    An object shall not be assigned or copied to an*/
/*              overlapping object                             */
/***************************************************************/
void GM_MISRAC_2012_R19_1(void)
{
    MY_UNIONT_T a = { 0 };
    MY_UNIONT_T b = { 0 };

    /* The following code  is non compliant */
    a.wordVal = a.byteVal[0];

    /* The following code is compliant */
    a = b;

    /* The following code is compliant - it manipulates the same memory
       location using different approaches*/
    a.bitValues.bit1 = 1;
    a.wordVal = 0;

}


/*

Ruleset 20
________  _______
\_____  \ \   _  \
 /  ____/ /  /_\  \
/       \ \  \_/   \
\_______ \ \_____  /
        \/       \/


*/
/****************************************************************/
/* Rule 20.2:                                                   */
/* The '," or \ charaters and the /* or // charater             */
/* sequences shall not occur in a header file name              */
/* Removed as it does not compile under VS or GNU C/C++         */
/****************************************************************/

/****************************************************************/
/* Rule 20.3                                                    */
/* The #include directive shall be followed by                  */
/*either a <filename> or "filename sequence                     */
/* Removed as it does not compile under VS or GNU C/C++         */
/****************************************************************/

/****************************************************************/
/* Rule 20.4                                                    */
/* A macro shall not be defined with the same name as           */
/* a keyword                                                    */
/****************************************************************/
void GM_MISRAC_2012_R20_4(void)
{
    #define auto( E ) for ( ; (E ) ; ) /* Non-compliant - redefined auto  */
    #define unless ( E ) if (! (E ) )   /* Compliant                        */
}

/****************************************************************/
/* Rule 20.6                                                    */
/* Tokens that look like a preprocessing directive              */
/* shall not occur within a marco arguement                     */
/****************************************************************/
void GM_MISRAC_2012_R20_6(void)
{

#define M( A ) printf ( #A)
    M (
#ifdef SW           /* Non-compliant */
        "Message 1"
#else               /* Non-compliant */
        "Message 2"
#endif              /* Non-compliant */
        );

}

/****************************************************************/
/* Rule 20.7                                                    */
/* Expressions resulting from the expansion of macro            */
/* parameters shall be enclosed in parentheses                  */
/****************************************************************/
uint8_t GM_MISRAC_2012_R20_7(void)
{
#define M1( x, y ) ( x * y )

    uint8_t r = M1 (  1 + 2 , 3 + 4 ); /* Non-comnpliant */

    return r;
}

/****************************************************************/
/* Rule 20.8                                                    */
/* The controlling expression of a #if or #elif                 */
/*preprocessing directive shall evaluate to 0 or 1              */
/****************************************************************/
void GM_MISRAC_2012_R20_8(void)
{
#define TRUE 1
#if TRUE               /* Compliant*/
#endif

#if 10              /*Non-compliant*/
#endif

}

/****************************************************************/
/* Rule 20.9                                                    */
/* All identifiers used in the controlling expression           */
/* of #if or #elif preprocessing directives shall be #define'd  */
/* before evaluation                                            */
/****************************************************************/
void GM_MISRAC_2012_R20_9(void)
{
#if M == 0 /* Non-compliant.  Does 'M' expand to zero or is it undefined? */
#endif

#if defined ( M ) /* Compliant - M is not evaluated */
#endif
}

/****************************************************************/
/* Rule 20.11                                                   */
/* A macro parameter immediately following a #                  */
/* operator shall not immediately be followed by a ## operator  */
/****************************************************************/
void GM_MISRAC_2012_R20_11(void)
{
#define A( x )      #x          /* Compliant */
#define C( x, y )   #x ## y     /* Non-compliant */
}

/****************************************************************/
/* Rule 20.12                                                   */
/* A macro parameter used as an operand to the # or             */
/* ## operators, which is itself subject to further macro       */
/* replacement, shall only be used as an operand to these       */
/* operators                                                    */
/****************************************************************/
void GM_MISRAC_2012_R20_12(void)
{
#define AA          0xffff
#define BB( x )     ( x ) + wow ## x /* Non-compliant */

    uint32_t wowAA = 0;

    /* Expands as wowAA = ( 0xffff ) + wowAA; */
    wowAA = BB ( AA ); /* Ecountering issue with this call */
}
/****************************************************************/
/* Rule 20.13                                                   */
/* A line whose first toekn is # shall be a valid               */
/* preprocessing directive                                      */
/* Removed as it does not compile under VS or GNU C/C++         */
/****************************************************************/

/****************************************************************/
/* Rule 20.14                                                   */
/* All #elif and #endif preporcessor directives shall reside in */
/* the same file as the #if, #ifdef or #ifndef directive to     */
/* which they are related                                       */
/****************************************************************/
void GM_MISRAC_2012_R20_14(void)
{
    /* Due to the complexity of implementation, and unlikelyhood of it occurring, this rule will not be implemented */
}


/*  RULE SET 21  */

/*  ********************************************************************/
/*  Rule 21.1                                                          */
/*  #define and #undef shall not be used on a reserved identifier or   */
/*  reserved macro name                                                */
/* Removed as it does not compile under VS or GNU C/C++                */
/*  ********************************************************************/


/*  ********************************************************************/
/*  Rule 21.3                                                          */
/*  The memory allocation and deallocation functions of <stblib,h>     */
/*  shall not be used                                                  */
/*                                                                     */
/*  ********************************************************************/
void GM_MISRAC_2012_R21_3(void)
{
   char_t *str;

   /* memory allocation not allowed*/
   str = (char_t *) malloc(15);

   free(str);

}

/*  ********************************************************************/
/*  Rule 21.7                                                          */
/*  The atof, atoi, atol and atoll functions of <stdlib.h>             */
/*  shall not be used                                                  */
/*                                                                     */
/*  ********************************************************************/
uint16_t GM_MISRAC_2012_R21_7(void)
{
   uint16_t val;
   char_t str[5] = {"989"};

   val = (uint16_t)atoi(str);
   return val;

}

/*  ********************************************************************/
/*  Rule 21.8                                                          */
/*  The library functions abort, exit, getenv and system of <stdlib.h> */
/*  shall not be used                                                  */
/*                                                                     */
/*  ********************************************************************/
uint8_t GM_MISRAC_2012_R21_8(uint8_t test_var)
{

   if (test_var == 0u)
   {
       exit(0);  /* Non-compliant */
   }
   else
   {
       return(0);
   }
}

/*  ********************************************************************/
/*  Rule 21.9                                                          */
/*  The library functions bsearch and qsort of <stdlib.h>              */
/*  shall not be used                                                  */
/*                                                                     */
/*  ********************************************************************/
void GM_MISRAC_2012_R21_9(void)
{
    int16_t values[] = { 88, 56, 100, 2, 25 };

    qsort(values, 5, sizeof(int16_t), GM_MISRAC_R21_9_support_cmpfunc);
}

/*  ********************************************************************/
/*  Rule 21.10                                                         */
/*  The Standard Library time and date functions                       */
/*  shall not be used                                                  */
/*                                                                     */
/*  ********************************************************************/
void GM_MISRAC_2012_R21_10(void)
{
  time_t timer;
  time(&timer);  /* Non-compliant */

}


/*  RULE SET 22  */

/********************************************************************/
/* Rule 22.1                                                        */
/* All resources obtained dynamically by means of Standard Library  */
/* functions shall be explicitly released                           */
/********************************************************************/
uint8_t GM_MISRAC_2012_R22_1(void)
{
    void *b = malloc(40);

    (void)GM_MISRAC_2012_R22_1_support();

    //non-compliant - dynamic memory not released
    return (uint8_t)1;
}

static uint8_t GM_MISRAC_2012_R22_1_support(void)
{
    FILE *filePtr = fopen("tmp", "r");

    //non-compliant - file not closed
    return (uint8_t)1;
}

/*-------------------------------------------------------------------------*/
/*  The following function has contains a MISRA 2012 Rule 22.2 violation  */
/*-------------------------------------------------------------------------*/
void GM_MISRAC_2012_R22_2 ( void )
{
    uint16_t a;
    char_t *p = ( char_t *) malloc ( 8 ) ;
    char_t  nullChar ;
    char_t *q = p;

    nullChar = '\0' ;

    free ( &a ) ;   /* Non compliant code */

    free ( p ) ;    /* Compliant */

    free ( q ) ;    /* Non compliant - already freed */

    return ;
}

/********************************************************************/
/* Rule 22.3                                                        */
/* The same file shall not be open for read and write access at the */
/* same time on different streams                                   */
/********************************************************************/
void GM_MISRAC_2012_R22_3(void)
{
    FILE *filePtr1 = fopen("tmp", "r+");
    FILE *filePtr2 = fopen("tmp", "r"); // Non compliant
}

/*-------------------------------------------------------------------------*/
/*  Rule 22.4                                                              */
/*-------------------------------------------------------------------------*/
static void GM_MISRAC_2012_R22_4(void)
{
    FILE *fp = fopen ("tmp","r");

    /* Non compliant code;  file opened for reading */
    ( void ) fprintf (fp, "String to write to file" );

    ( void ) fclose ( fp );

    return;
}

/*-------------------------------------------------------------------------*/
/*  Rule 22.5                                                              */
/*-------------------------------------------------------------------------*/
static void GM_MISRAC_2012_R22_5(void)
{
    FILE *pf1;
    FILE *pf2;
    FILE  f3;

    pf1 = fopen("tmp","r");
    if (NULL != pf1)
    {
        pf2 = pf1;

        f3 = *pf2;  /* Non compliant code */

        (void)fclose(pf1);
    }
    return;
}

/*-------------------------------------------------------------------------*/
/*  Rule 22.6                                                              */
/*-------------------------------------------------------------------------*/
static int8_t GM_MISRAC_2012_R22_6(void)
{
    FILE *fp;
    int8_t retValue;

    fp = fopen ("tmp","w");

    if (NULL == fp)
    {
        retValue = 0;
    }
    else
    {
        retValue = 1;
        (void)fclose(fp);
    }
    /* Non compliant code - file is closed */
    (void)fprintf ( fp, "%s", "String to write to file");

    return retValue;
}
