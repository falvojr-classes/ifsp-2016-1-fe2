/**
 * 13. Suponha que inicialmente x tem o valor 3 e y o valor 10.
 * Qual o valor das variáveis x e y após a execução das seguintes instruções:
**/

#include<stdio.h>

int main()
{
    int x = 3, y = 10;

    x=x+y;
    printf("a) X=%d e Y=%d", x, y);
    x=x+x;
    printf("\nb) X=%d e Y=%d", x, y);
    x=y; x=3;
    printf("\nc) X=%d e Y=%d", x, y);
    x=x*x; x=x+x;
    printf("\nd) X=%d e Y=%d", x, y);
    y=x; x=y;
    printf("\ne) X=%d e Y=%d", x, y);
    y+=--x;
    printf("\nf) X=%d e Y=%d", x, y);
    y-=++x;
    printf("\ng) X=%d e Y=%d", x, y);

    getchar();
    return 0;
}

