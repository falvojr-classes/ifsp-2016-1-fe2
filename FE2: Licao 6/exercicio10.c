/*
10- Fazer um programa para ler uma matriz A de ordem M de elementos inteiros,
 com M <= 10, e verificar se ela é triangula inferior. Uma matriz é triangular
 inferior se todos os elementos acima da diagonal principal forem nulos (igual a zero).
*/

#include <stdio.h>

#define M 3

void lerMatriz(int matriz[M][M])
{
    int i, j;
    for (i = 0;  i < M ; i++)
    {
        for (j = 0;  j < M ; j++)
        {
            printf("matriz[%d][%d]:", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

int processarMatriz(int matriz[M][M])
{
    int i, j, resultado;

    resultado = 0;

    for (i = 0; (i < M-1) && (resultado == 0); i++)
    {
        for (j = i + 1; (j < M) && (resultado == 0); j++)
        {
            resultado += matriz[i][j];
        }
    }
    return resultado;
}

void imprimirResultado(int resultado)
{
    if (resultado == 0)
    {
        printf("\nMatriz triangular inferior!");
    }
    else
    {
        printf("\nNao eh uma Matriz triangular inferior!");
    }
}

int main()
{
    int matrizA[M][M];

    lerMatriz(matrizA);

    int resultado = processarMatriz(matrizA);

    imprimirResultado(resultado);

    getchar();
    return 0;
}
