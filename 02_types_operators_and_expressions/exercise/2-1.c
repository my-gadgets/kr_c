#include <stdio.h>
#include <limits.h>

void determineRangeOfTypesByHeaders()
{
    /* signed types */
    printf("signed char min    = %d\n", SCHAR_MIN);
    printf("signed char max    = %d\n", SCHAR_MAX);
    printf("signed short min   = %d\n", SHRT_MIN);
    printf("signed short max   = %d\n", SHRT_MAX);
    printf("signed int min     = %d\n", INT_MIN);
    printf("signed int max     = %d\n", INT_MAX);
    printf("signed long min    = %ld\n", LONG_MIN);
    printf("signed long max    = %ld\n", LONG_MAX);
    /* unsigned types */
    printf("unsigned char max   = %u\n", UCHAR_MAX);
    printf("unsigned short max  = %u\n", USHRT_MAX);
    printf("unsigned int max    = %u\n", UINT_MAX);
    printf("unsigned long max   = %lu\n", ULONG_MAX);
}

void determineRangeOfTypesByComputation()
{
    signed char schar_max = (char)((unsigned char)~0 >> 1);
    signed short sshort_max = (short)((unsigned short)~0 >> 1);
    signed int sint_max = (int)((unsigned int)~0 >> 1);
    signed long slong_max = (long)((unsigned long)~0 >> 1);

    unsigned char uchar_max = (unsigned char)~0;
    unsigned short ushort_max = (unsigned short)~0;
    unsigned int uint_max = (unsigned int)~0;
    unsigned long ulong_max = (unsigned long)~0;

    /* signed types */
    printf("signed char min    = %d\n", -schar_max-1);
    printf("signed char max    = %d\n", schar_max);
    printf("signed short min   = %d\n", -sshort_max-1);
    printf("signed short max   = %d\n", sshort_max);
    printf("signed int min     = %d\n", -sint_max-1);
    printf("signed int max     = %d\n", sint_max);
    printf("signed long min    = %ld\n", -slong_max-1);
    printf("signed long max    = %ld\n", slong_max);
    /* unsigned types */
    printf("unsigned char max   = %u\n", uchar_max);
    printf("unsigned short max  = %u\n", ushort_max);
    printf("unsigned int max    = %u\n", uint_max);
    printf("unsigned long max   = %lu\n", ulong_max);

}

/* determine range of types */
int main()
{
    printf("by headers\n");
    determineRangeOfTypesByHeaders();
    printf("\nby computation\n");
    determineRangeOfTypesByComputation();
    return 0;
}

