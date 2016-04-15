/**
 * 10. Fazer um programa em Linguagem C que gera os números entre 1000 e 2000,
 * mostrando aqueles que quando divididos por 11 deixam resto igual a 5.
 */

#include<stdio.h>

#define MIN 1000
#define MAX 2000
#define DIVISOR 11
#define RESTO 5

int main()
{
    int i;

    for(i = MIN; i <= MAX; i++)
    {
        if (i % DIVISOR == RESTO)
        {
            printf("%d\n", i);
        }
    }

    getchar();
    return 0;
}



