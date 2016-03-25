/**
 * 15. Para cada um dos programas seguintes: (i) siga o funcionamento
 * para os dados indicados, fazendo uma tabela da variação dos valores
 * das variáveis; e (ii) identifique informalmente a sua função genérica.
 *
 * c) 3, 9, 7
**/

#include<stdio.h>

main()
{
    int x,y,z,m;
    printf("Introduza tres valores: ");
    scanf("%d %d %d",&x,&y,&z);
    m=x;
    if (y<=z)
    {
        if (x<=y)
        {
            m=y;
        }
        else if (z<=x)
        {
            m=z;
        }
    }
    else if (x<=z)
    {
        m=z;
    }
    else if (y<=x)
    {
        m=y;
    }
    printf("%d \n",m);
}
