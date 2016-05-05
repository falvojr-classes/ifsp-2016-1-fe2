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
