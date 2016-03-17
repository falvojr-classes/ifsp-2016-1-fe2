/**
 * Escreva um algoritmo para receber o nome, o  sexo (“M” ou “F”)
 * e a idade de uma pessoa. Se a pessoa for do sexo feminino e tiver
 * menos de 25 anos, imprimir o nome e a mensagem: aceita. Caso contrário,
 * imprimir o nome e a mensagem não aceita.
**/

#include<stdio.h>
#include<ctype.h>

int main()
{
    char nome[20], sexo;
    int idade;

    printf("Digite o Nome:");
    scanf("%s", &nome);

    printf("Digite o Sexo (M ou F):");
    scanf("%s", &sexo);

    printf("Digite a Idade:");
    scanf("%d", &idade);

    // Alternativa 1:

    if ((sexo == 'f' || sexo == 'F') && idade < 25)
    {
        printf("%s aceita", nome);
    }
    else
    {
        printf("%s nao aceita", nome);
    }

    // Alternativa 2:

    switch(sexo)
    {
    case 'F':
    case 'f':
        if (idade < 25)
        {
            printf("%s aceita", nome);
        }
        else
        {
            printf("%s nao aceita", nome);
        }
        break;
    default:
        printf("%s nao aceita", nome);
        break;
    }

    // Alternativa 3:

    sexo = toupper(sexo);
    if (sexo == 'F' && idade < 25)
    {
        printf("%s aceita", nome);
    }
    else
    {
        printf("%s nao aceita", nome);
    }

    getchar();
    return 0;
}
