/**
 * 12. Fazer um programa em linguagem C para gerar e escrever os 4
 * primeiros números perfeitos. Um número perfeito é aquele que é
 * igual a soma dos seus divisores, menos ele mesmo.
 * (Ex.: 6 = l + 2 + 3; 28 = 1 + 2 + 4 + 7 + 14; etc).
**/

#include<stdio.h>

#define PERFEITOS 5

int main()
{
    int i, j, soma, qtdPerfeitos = 0;

    for(i=1; qtdPerfeitos < PERFEITOS; i++)
    {
        soma = 0;
        for(j=1; j <= (i/2); j++)
        {
            if(i%j == 0)
            {
                soma += j;
            }
        }
        if (soma == i)
        {
            qtdPerfeitos++;
            printf("%d\n", i);
        }
    }
    getchar();
    return 0;
}
