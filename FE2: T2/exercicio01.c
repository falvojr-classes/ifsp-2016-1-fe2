/**
 * 1. Faça um programa em linguagem C que escreva a tabuada dos números de 1 a 10.
**/

#include<stdio.h>

#define QTD_TABUADAS 10

int main()
{
    int i, j, produto;

    for(i = 1; i <= QTD_TABUADAS; i++)
    {
        for(j = 1; j<=QTD_TABUADAS; j++)
        {
            produto = i * j;
            printf("\n%dx%d = %d", i, j, produto);
        }
        printf("\n");
    }

    getchar();
    return 0;
}
