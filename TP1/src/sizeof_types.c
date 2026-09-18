#include <stdio.h>

int main(void)
{
    printf("char                 : %zu octets\n", sizeof(char));
    printf("long int             : %zu octets\n", sizeof(long int));
    printf("long long int        : %zu octets\n", sizeof(long long int));
    printf("short                : %zu octets\n", sizeof(short));
    printf("int                  : %zu octets\n", sizeof(int));

    printf("signed char          : %zu octets\n", sizeof(signed char));
    printf("signed short         : %zu octets\n", sizeof(signed short));
    printf("signed int           : %zu octets\n", sizeof(signed int));
    printf("signed long int      : %zu octets\n", sizeof(signed long int));
    printf("signed long long int : %zu octets\n", sizeof(signed long long int));


    printf("unsigned char        : %zu octets\n", sizeof(unsigned char));
    printf("unsigned short       : %zu octets\n", sizeof(unsigned short));
    printf("unsigned int         : %zu octets\n", sizeof(unsigned int));
    printf("unsigned long int    : %zu octets\n", sizeof(unsigned long int));
    printf("unsigned long long   : %zu octets\n", sizeof(unsigned long long int));

    printf("float                : %zu octets\n", sizeof(float));
    printf("double               : %zu octets\n", sizeof(double));
    printf("long double          : %zu octets\n", sizeof(long double));

}
