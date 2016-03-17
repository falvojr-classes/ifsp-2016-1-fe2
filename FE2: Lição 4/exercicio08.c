/**
 * Crie um programa que leia um valor inteiro X e
 * diga se ele é par ou ímpar.
**/

#include<stdio.h>

int main()
{
    int x;

    printf("Digite X:");
    scanf("%i", &x);

    if (x%2 == 0)
    {
        printf("Par!");
    }
    else
    {
        printf("Impar!");
    }

    getchar();
    return 0;
}

