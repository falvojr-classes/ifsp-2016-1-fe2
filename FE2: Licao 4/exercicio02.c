/**
 * 2. Faça um programa que leia dois valores inteiros A e B. Se os valores
 * forem iguais deverá ser calculada a soma dos dois valores, caso contrário
 * multiplicar A por B. Armazene o resultado em uma variável C.
**/

#include <stdio.h>

int main ()
{
    int valorA, valorB, valorC;

    printf("Valor A: ");
    scanf("%i", &valorA);

    printf("Valor B: ");
    scanf("%i", &valorB);

    if (valorA == valorB)
    {
        valorC = valorA + valorB;
    }
    else
    {
        valorC = valorA * valorB;
    }
    printf("Valor C: %d", valorC);
}
