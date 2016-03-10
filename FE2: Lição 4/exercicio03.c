/**
 * 3. Faça um programa que leia o nome de um aluno e suas três notas em uma disciplina.
 * Calcule e mostre o nome e a média desse aluno. A seguir, verifique e mostre se ele
 * foi aprovado ou reprovado, sendo que a média mínima para aprovação é 6.0 pontos.
**/

#include <stdio.h>

#define NUMERO_NOTAS 3

int main ()
{
    char[20] nome;
    float nota1, nota2, nota3, media;

    printf("Nome: ");
    scanf("%s", &valorA);

    printf("Nota 1: ");
    scanf("%f", &valorB);

    printf("Nota 2: ");
    scanf("%f", &valorA);

    printf("Nota 3: ");
    scanf("%f", &valorB);

    media = (nota1 + nota2 + nota3) / NUMERO_NOTAS;

    if (media < 6)
    {
        printf("Reprovado");
    }
    else
    {
        printf("Aprovado");
    }
}
