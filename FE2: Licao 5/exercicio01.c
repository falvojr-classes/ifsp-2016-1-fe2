/**
 * 1. Faça um programa que escreva a tabuada de um número
 * inteiro fornecido.
 */

#include<stdio.h>

int main()
{
    int numero, i, resultado;

    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d", &numero);

    // Solucao 1:
    for(i = 1; i <= 10; i++)
    {
        resultado = numero * i;
        printf("%dx%d=%d\n", numero, i, resultado);
    }

    // Solucao 2:
    i = 1;
    while(i <= 10)
    {
        resultado = numero * i;
        printf("%dx%d=%d\n", numero, i, resultado);
        i++;
    }

    // Solucao 3:
    i = 1;
    do
    {
        resultado = numero * i;
        printf("%dx%d=%d\n", numero, i, resultado);
        i++;
    }
    while(i <= 10);

    getchar();
    return 0;
}
