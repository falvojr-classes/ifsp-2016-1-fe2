/**
 * 2. Fazer um programa que leia uma matriz de de inteiros 3x3 e em seguida
 * um valor X qualquer. Seu programa deverá fazer uma busca do valor de X
 * na matriz lida e informar a posição em que foi encontrado ou se não
 * foi encontrado.
**/

#define DIMENSAO 3

#include <stdio.h>

int main()
{
    int matriz[DIMENSAO][DIMENSAO], x;
    int i, j, encontrei;

    // Inicializa a valiavel encontrei com zero (false)
    encontrei = 0;

    // Le a matriz de inteiros 3x3:
    for(i = 0; i < DIMENSAO; i++)
    {
        for(j = 0; j < DIMENSAO; j++)
        {
            printf("matriz[%d][%d]=", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Le o valor de X:
    printf("\nX=");
    scanf("%d", &x);

    // Busca a posição de X na matriz enquanto ele ainda nao tiver sido encontrado:
    for(i = 0; i < DIMENSAO && encontrei == 0; i++)
    {
        for(j = 0; j < DIMENSAO && encontrei == 0; j++)
        {
            int valor = matriz[i][j];
            if (valor == x)
            {
                printf("\nOs indices (linha, coluna) de X sao: %d e %d\n", i, j);
                encontrei = 1;
            }
        }
    }

    // Verifica se X nao foi encontrado, equivalente a "encontrei == 1"
    if (encontrei == 0)
    {
        printf("\nX nao foi encontrado!\n");
    }

    getchar();
    return 0;
}
