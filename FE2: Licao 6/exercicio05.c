/**
 * 5. Crie um programa que defina e imprima a seguinte matriz:
 *
 * {
 *   { 'I', 'F', 'S', 'P' },
 *   { '2', '0', '1', '6' }
 * }
 */

#include<stdio.h>

#define LINHAS 2
#define COLUNAS 4

int main()
{
    int i, j;
    char matriz[LINHAS][COLUNAS] =
    {
        { 'I', 'F', 'S', 'P' },
        { '2', '0', '1', '6' }
    };

    for(i = 0; i < LINHAS; i++)
    {
        for(j = 0; j < COLUNAS; j++)
        {
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }

    getchar();
    return 0;
}
