/**
 * Faça um programa que leia dois números inteiros A e B
 * e imprima o maior deles. Dê um tratamento caso estes
 * números forem iguais.
**/

#include<stdio.h>

int main()
{
    int a, b;

    printf("Digite A:");
    scanf("%i", &a);

    printf("Digite B:");
    scanf("%i", &b);

    if (a > b)
    {
        printf("A eh maior: %d", a);
    }
    else if (a < b)
    {
        printf("B eh maior: %d", b);
    }
    else
    {
        printf("A e B sao iguais: %d == %d", a, b);
    }
}
