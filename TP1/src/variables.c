#include <stdio.h>

int main(void)
{
    char c = 'Z';
    signed char sc = -25;
    unsigned char uc = 200;

    short s = -1500;
    signed short ss = -3000;
    unsigned short us = 45000;

    int i = -75000;
    signed int si = -150000;
    unsigned int ui = 3500000000U;

    long int l = -2500000L;
    signed long int sl = -3500000L;
    unsigned long int ul = 7500000UL;

    long long int ll = -15000000000LL;
    signed long long int sll = -25000000000LL;
    unsigned long long int ull = 55000000000ULL;

    float f = 7.25f;
    double d = 6.283185307;
    long double ld = 9.876543210123456L;

    printf("char: %c\n", c);
    printf("short: %hd\n", s);
    printf("int: %d\n", i);
    printf("long int: %ld\n", l);
    printf("long long int: %lld\n", ll);

    printf("signed char: %hhd\n", sc);
    printf("signed short: %hd\n", ss);
    printf("signed int: %d\n", si);
    printf("signed long int: %ld\n", sl);
    printf("signed long long int: %lld\n", sll);

    printf("unsigned char: %hhu\n", uc);
    printf("unsigned short: %hu\n", us);
    printf("unsigned int: %u\n", ui);
    printf("unsigned long int: %lu\n", ul);
    printf("unsigned long long: %llu\n", ull);

    printf("float: %f\n", f);
    printf("double: %lf\n", d);
    printf("long double: %Lf\n", ld);

}

