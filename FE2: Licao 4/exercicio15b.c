/**
 * 15. Para cada um dos programas seguintes: (i) siga o funcionamento
 * para os dados indicados, fazendo uma tabela da variação dos valores
 * das variáveis; e (ii) identifique informalmente a sua função genérica.
 *
 * b) -2
**/

#include<stdio.h>

main()
{
    int x,m;
    printf("Introduza um valor: ");
    scanf("%d",&x);
    if (x<0)
        m=-x;
    else
        m=x;
    printf("%d \n",m);
}


