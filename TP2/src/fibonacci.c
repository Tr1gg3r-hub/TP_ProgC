#include <stdio.h>

int main(void)
{
    int n;
    int u0 = 0;
    int u1 = 1;
    int suivant;

    printf("Entrez n : ");
    scanf("%d", &n);

    printf("%d", u0);

    if (n >= 1)
        printf(", %d", u1);

    for (int i = 2; i <= n; i++)
    {
        suivant = u0 + u1;
        printf(", %d", suivant);

        u0 = u1;
        u1 = suivant;
    }

    printf("\n");

}