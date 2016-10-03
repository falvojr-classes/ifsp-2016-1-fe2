/**
 * 2. Faça um programa que escreva a soma dos múltiplos de 7 entre 100 e 200.
 */

#include<stdio.h>

#define NUMERO 7

int main()
{
    int i = 100, soma = 0;

    printf("Multiplos de %d entre 100 e 200: ", NUMERO);

    while(i < 201)
    {
        if(i%NUMERO == 0)
        {
            soma += i;
            printf("%d\n", i);
        }
        i++;
    }

    printf("\nSoma: %d", soma);

    getchar();
    return 0;
}
