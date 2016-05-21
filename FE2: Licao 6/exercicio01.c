/**
 * 1. Implementar um programa que imprima a soma do seguinte vetor:
 *
 * { 1.35, 5.00, 9.65, 6.10, 3.33, 8.75 }
**/

#include<stdio.h>

int main()
{
    int i;
    float soma, numeros[6] = { 1.35, 5.00, 9.65, 6.10, 3.33, 8.75 };

    soma = 0;

    for(i = 0; i < 7; i++)
    {
       soma += numeros[i];
    }

    printf("Soma %.2f", soma);

    getchar();
    return 0;
}
