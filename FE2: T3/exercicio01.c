/**
 * 1. Fazer um programa que leia um vetor de caracteres de 20 posi��es
 * e uma letra X qualquer. Seu programa dever� faze ruma busca do
 * valor de X no vetor lido e informar a posi��o em que foi encontrado.
**/

#define DIMENSAO 20

#include <stdio.h>

int main()
{
    char vetor[DIMENSAO], x;
    int i, encontrei;

    // Inicializa a valiavel encontrei com zero (false)
    encontrei = 0;

    // Le o vetor de caracteres de 20 posi��es:
    for (i = 0; i < DIMENSAO ; i++)
    {
        printf("vetor[%d]=", i);
        scanf("%s", &vetor[i]);
    }

    // Le o valor de X:
    printf("\nX=");
    scanf("%s", &x);

    // Busca a posi��o de X no vetor enquanto ele ainda nao tiver sido encontrado:
    for (i = 0; i < DIMENSAO && !encontrei ; i++)
    {
        char valor = vetor[i];
        if (valor == x)
        {
            printf("\nO indice de X eh: %d\n", i);
            encontrei = 1;
        }
    }

    // Verifica se X nao foi encontrado, equivalente a "encontrei == 1"
    if (!encontrei)
    {
        printf("\nX nao foi encontrado!\n");
    }

    getchar();
    return 0;
}
