/**
 * A Organização Mundial de Saúde (OMS) classifica as pessoas pela sua faixa etária,
 * de acordo com a tabela a seguir. Fazer um programa que leia o nome e a idade de
 * uma pessoa e mostre seu nome e sua classificação:
 *
 *  0  a 12     = Criança
 *  13 a 18     = Adolescente
 *  19 a 59     = Adulto
 *  60 e acima  = Idoso
**/

#include<stdio.h>

int main()
{
    char nome[20];
    int idade;

    printf("Nome:");
    scanf("%s", &nome);

    printf("Idade:");
    scanf("%i", &idade);

    // Alternativa 1:

    if (idade >= 0 && idade <= 12)
    {
        printf("Crianca");
    }
    else if (idade >= 13 && idade <= 18)
    {
        printf("Adolescente");
    }
    else if (idade >= 19 && idade <= 59)
    {
        printf("Adulto");
    }
    else
    {
        printf("Idoso");
    }

    // Alternativa 2:

    if (idade < 13)
    {
        printf("Crianca");
    }
    else if (idade < 19)
    {
        printf("Adolescente");
    }
    else if (idade < 60)
    {
        printf("Adulto");
    }
    else
    {
        printf("Idoso");
    }

    // Alternativa 2:

    switch(idade)
    {
    case 0 ... 12:
        printf("Crianca");
        break;
    case 13 ... 18:
        printf("Adolescente");
        break;
    case 19 ... 59:
        printf("Adulto");
        break;
    default:
        printf("Idoso");
        break;
    }

    getchar();
    return 0;
}
