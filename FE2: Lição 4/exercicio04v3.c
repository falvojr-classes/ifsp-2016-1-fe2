#include <stdio.h>
#include <ctype.h>

int main( )
{
    char caractere;

    printf("Digite um caractere: ");
    scanf ("%c", &caractere);

	caractere = toupper(caractere);

    if (caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U') {
		printf("O caractere digitado eh uma vogal.");
	} else {
		printf("O caractere digitado nao eh uma vogal.");
	}

    getchar();
    return 0;
}
