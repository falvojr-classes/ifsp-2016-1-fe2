/**
 * 7. Faça um programa na linguagem C que receba o custo de um espetáculo teatral e o
 * preço do convite desse espetáculo. Esse programa deve calcular e mostrar a quantidade
 * de convites que devem ser vendidos para que pelo menos o custo do espetáculo seja
 * alcançado.
**/

#include <stdio.h> // Biblioteca dos comandos de E/S (I/O)
#include <math.h>  // Biblioteca para cálculos matemáticos

int main( )
{
    float valorEspetaculo, precoConvite;
    int qtdConvitesNecessaria;

    printf("Valor do espetaculo:");
    scanf ("%f", &valorEspetaculo);

    printf("Preco do convite:");
    scanf ("%f", &precoConvite);

    qtdConvitesNecessaria = ceil(valorEspetaculo / precoConvite);

    printf("\nQuantidade de convites: %i", qtdConvitesNecessaria);

    getchar();
    return 0;
}
