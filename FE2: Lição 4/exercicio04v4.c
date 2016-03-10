#include <stdio.h>
#include <ctype.h>

int main( )
{
    char caractere;

    printf("Digite um caractere: ");
    scanf ("%c", &caractere);

    caractere = toupper(caractere);

    switch(caractere)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("O caractere digitado eh uma vogal.");
        break;
    default:
        printf("O caractere digitado nao eh uma vogal.");
        break;

    }

    getchar();
    return 0;
}
