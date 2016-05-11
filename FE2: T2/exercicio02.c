/**
 * 2. Faça um programa em linguagem C que escreva todos os números
 * primos dentro de um intervalo fornecido pelo usuário.
**/

#include<stdio.h>

int main()
{

    int i, j, inicio, fim, divisores;

    printf("Digite o inicio:");
    scanf("%d", &inicio);

    printf("Digite o fim:");
    scanf("%d", &fim);

    for(i = inicio; i<=fim; i++)
    {
        divisores =0;
        for(j = 1; j<=i; j++)
        {
            if(i%j == 0)
            {
                divisores++;
            }
        }
        if(divisores == 2)
        {
            printf("O numero %d eh primo!\n", i);
        }
    }
    getchar();
    return 0;
}
