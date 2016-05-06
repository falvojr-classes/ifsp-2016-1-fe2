/**
 * 15. Elabore um algoritmo que receba um valor inteiro
 * e informe se o valor recebido é um número primo. Números
 * primos são os números naturais que têm apenas dois divisores:
 * 1 e ele mesmo.
**/

#include<stdio.h>

int main()
{
    int numero, divisores, i;

    divisores = 0;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for(i=1; i <= numero; i++)
    {
        if(numero%i == 0)
        {
            divisores++;
        }
    }

    if(divisores == 2)
    {
        printf("O numero %d eh primo!\n", numero);
    }
    else
    {
        printf("O numero %d nao eh primo!\n", numero);
    }

    getchar();
    return 0;
}
