#include <stdio.h>
#include <limits.h>
#include <float.h>

main()
{
    printf("char min: %d\n", CHAR_MIN);
    printf("char max: %d\n", CHAR_MAX);
    printf("unsigned char max: %d\n\n", UCHAR_MAX);

    printf("short min: %d\n", SHRT_MIN);    
    printf("short max: %d\n", SHRT_MAX);
    printf("unsigned short max: %u\n\n", USHRT_MAX);

    printf("int min: %d\n", INT_MIN);
    printf("int max: %d\n", INT_MAX);
    printf("unsigned int max: %u\n\n", UINT_MAX);

    printf("long min: %d\n", LONG_MIN);
    printf("long max: %d\n", LONG_MAX);
    printf("unsigned long max: %u\n\n", ULONG_MAX);

    printf("float min: %g\n", FLT_MIN);
    printf("float max: %g\n", FLT_MAX);
}
