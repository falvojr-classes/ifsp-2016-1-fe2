#include <stdio.h>

#define LINHAS 5

int main()
{
    int i, j;

    for(i=1; i <= LINHAS; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    getchar();
    return 0;
}
