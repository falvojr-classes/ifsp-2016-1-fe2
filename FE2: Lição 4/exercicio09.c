/**
 * Faça um programa que leia dois números inteiros A e B e retorne o
 * quociente da divisão entre A e B. O programa deve verificar,
 * previamente à divisão, se o valor de B é diferente de zero.
**/

#include<stdio.h>

int main()
{
    int a, b;

    printf("Digite A:");
    scanf("%i", &a);

    printf("Digite B:");
    scanf("%i", &b);

    if (b != 0)
    {
        float quociente = a / b;
        printf("%i / %i = %.2f", a, b, quociente);
    }
    else
    {
        printf("Digite um divisor diferente de ZERO!");
    }

    getchar();
    return 0;
}

