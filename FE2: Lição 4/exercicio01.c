/**
 * 1. Faça um programa que leia os valores A, B, C
 * e diga se a soma de A + B é menor, maior ou igual a C.
**/

#include <stdio.h>

int main ()
{
    int valorA, valorB, valorC, somaAeB;

    printf("Valor A: ");
    scanf("%i", &valorA);

    printf("Valor B: ");
    scanf("%i", &valorB);

    printf("Valor C: ");
    scanf("%i", &valorC);

    somaAeB = valorA + valorB;

    if (somaAeB < valorC)
    {
        printf("A + B eh menor que C");
    }
    else if (somaAeB == valorC)
    {
        printf("A + B eh igual que C");
    }
    else
    {
        printf("A + B eh maior que C");
    }
}
