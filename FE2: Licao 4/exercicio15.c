/**
 * 15. Para cada um dos programas seguintes: (i) siga o funcionamento
 * para os dados indicados, fazendo uma tabela da variação dos valores
 * das variáveis; e (ii) identifique informalmente a sua função genérica.
 *
 * a) 20, 30
**/

#include<stdio.h>
main() {
    int x = 20,y = 30,m;
    printf("Introduza dois valores: ");
    scanf("%d %d",&x,&y);
    if (y<x)
        m=x;
    else
        m=y;
    printf("%d \n",m);
}


