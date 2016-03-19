#include <stdio.h>

int main( )
{
    char caractere;

    printf("Digite um caractere: ");
    scanf ("%c", &caractere);

    if (caractere == 'a' || caractere == 'A')
    {
        printf("O caractere digitado eh uma vogal.");
    }
    else if (caractere == 'e'|| caractere == 'E')
    {
        printf("O caractere digitado eh uma vogal.");
    }
    else if (caractere == 'i'|| caractere == 'I')
    {
        printf("O caractere digitado eh uma vogal.");
    }
    else if (caractere == 'o'|| caractere == 'O')
    {
        printf("O caractere digitado eh uma vogal.");
    }
    else if (caractere == 'u'|| caractere == 'U')
    {
        printf("O caractere digitado eh uma vogal.");
    }
    else
    {
        printf("O caractere digitado nao eh uma vogal.");
    }

    getchar();
    return 0;
}
