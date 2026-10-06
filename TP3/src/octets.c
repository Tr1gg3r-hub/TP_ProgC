#include <stdio.h>

int main(void)
{
    short s = 0x0203;
    int i = 0x01020304;
    long int l = 0x0102030405060708L;
    float f = 3.0f;
    double d = 1.0;
    long double ld = 1.0L;

    unsigned char *p;

    /* short */
    printf("Octets de short :\n");
    p = (unsigned char *)&s;

    for (size_t j = 0; j < sizeof(s); j++)
    {
        printf("%02x ", p[j]);
    }

    printf("\n\n");

    /* int */
    printf("Octets de int :\n");
    p = (unsigned char *)&i;

    for (size_t j = 0; j < sizeof(i); j++)
    {
        printf("%02x ", p[j]);
    }

    printf("\n\n");

    /* long int */
    printf("Octets de long int :\n");
    p = (unsigned char *)&l;

    for (size_t j = 0; j < sizeof(l); j++)
    {
        printf("%02x ", p[j]);
    }

    printf("\n\n");

    /* float */
    printf("Octets de float :\n");
    p = (unsigned char *)&f;

    for (size_t j = 0; j < sizeof(f); j++)
    {
        printf("%02x ", p[j]);
    }

    printf("\n\n");

    /* double */
    printf("Octets de double :\n");
    p = (unsigned char *)&d;

    for (size_t j = 0; j < sizeof(d); j++)
    {
        printf("%02x ", p[j]);
    }

    printf("\n\n");

    /* long double */
    printf("Octets de long double :\n");
    p = (unsigned char *)&ld;

    for (size_t j = 0; j < sizeof(ld); j++)
    {
        printf("%02x ", p[j]);
    }

    printf("\n");

}