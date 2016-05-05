/**
 * 14. Elabore um algoritmo que calcule o valor do fatorial de
 * um número informado pelo usuário. Lembrando que 0! = 1; 1! = 1;
 * 2! = 2 * 1 = 2; 3! = 3 * 2 * 1 = 6; etc.
 */

#include<stdio.h>

int main()
{
    int numero, fatorial, i;

    fatorial = 1;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for(i = 1; i <= numero; i++)
    {
        fatorial *= i;
    }

    printf("\n!%d = %d\n", numero, fatorial);

    getchar();
    return 0;
}

