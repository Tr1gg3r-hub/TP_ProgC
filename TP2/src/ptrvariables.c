#include <stdio.h>

int main(void)
{
    char c = 65;
    short s = 1234;
    int i = 123456;
    long int l = 123456789;
    long long int ll = 123456789012345LL;
    float f = 1.0f;
    double d = 2.0;
    long double ld = 3.0L;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pl = &l;
    long long int *pll = &ll;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("Avant la manipulation :\n");

    printf("Adresse de c : %p, Valeur de c : %02x\n",
           (void *)pc, (unsigned char)c);

    printf("Adresse de s : %p, Valeur de s : %04hx\n",
           (void *)ps, (unsigned short)s);

    printf("Adresse de i : %p, Valeur de i : %08x\n",
           (void *)pi, (unsigned int)i);

    printf("Adresse de l : %p, Valeur de l : %016lx\n",
           (void *)pl, (unsigned long)l);

    printf("Adresse de ll : %p, Valeur de ll : %016llx\n",
           (void *)pll, (unsigned long long)ll);

    printf("Adresse de f : %p, Valeur de f : %08x\n",
           (void *)pf, *(unsigned int *)&f);

    printf("Adresse de d : %p, Valeur de d : %016llx\n",
           (void *)pd, *(unsigned long long *)&d);

    printf("Adresse de ld : %p\n", (void *)pld);

    /*
     * Manipulation des variables avec les pointeurs.
     */
    *pc = 66;
    *ps = 2345;
    *pi = 654321;
    *pl = 987654321;
    *pll = 987654321098765LL;
    *pf = 1.5f;
    *pd = 3.0;
    *pld = 4.0L;

    printf("\nAprès la manipulation :\n");

    printf("Adresse de c : %p, Valeur de c : %02x\n",
           (void *)pc, (unsigned char)c);

    printf("Adresse de s : %p, Valeur de s : %04hx\n",
           (void *)ps, (unsigned short)s);

    printf("Adresse de i : %p, Valeur de i : %08x\n",
           (void *)pi, (unsigned int)i);

    printf("Adresse de l : %p, Valeur de l : %016lx\n",
           (void *)pl, (unsigned long)l);

    printf("Adresse de ll : %p, Valeur de ll : %016llx\n",
           (void *)pll, (unsigned long long)ll);

    printf("Adresse de f : %p, Valeur de f : %08x\n",
           (void *)pf, *(unsigned int *)&f);

    printf("Adresse de d : %p, Valeur de d : %016llx\n",
           (void *)pd, *(unsigned long long *)&d);

    printf("Adresse de ld : %p\n", (void *)pld);

}