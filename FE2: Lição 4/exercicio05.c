/**
 * Fazer um programa em Linguagem C que leia três valores
 * inteiros: A, B e C. Após a leitura destes dados imprima-os
 * em ordem decrescente. Considere que os três valores são
 * distintos.
**/

#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Digite A: ");
    scanf("%i", &a);

    printf("Digite B: ");
    scanf("%i", &b);

    printf("Digite C: ");
    scanf("%i", &c);

    if (a > b && a > c)
    {
        if (b > c)
        {
            printf("\n%i\n%i\n%i", a, b, c);
        }
        else
        {
            printf("\n%i\n%i\n%i", a, c, b);
        }
    }
    else if (b > a && b > c)
    {
        if (a > c)
        {
            printf("\n%i\n%i\n%i", b, a, c);
        }
        else
        {
            printf("\n%i\n%i\n%i", b, c, a);
        }
    }
    else
    {
        if (a > b)
        {
            printf("\n%i\n%i\n%i", c, a, b);
        }
        else
        {
            printf("\n%i\n%i\n%i", c, b, a);
        }
    }

    getchar();
    return 0;
}
