/**
 * Escreva um programa em Linguagem C que leia a altura (em metros) de um
 * grupo de 20 pessoas, calcule e exiba:
 *
 * a) A maior altura do grupo;
 * b) A altura média do grupo;
 * c) O número de pessoas com altura superior a dois metros.
**/
#include<stdio.h>

#define NUMERO_PESSOAS 2

int main()
{
    int i, qtdMaior2m = 0;
    float novaALtura, maiorAltura = 0, somaAlturas = 0;

    for(i = 1; i <= NUMERO_PESSOAS; i++)
    {
        printf("Digite a altura da Pessoa %d: ", i);
        scanf("%f", &novaALtura);

        somaAlturas += novaALtura;

        if (novaALtura > maiorAltura)
        {
            maiorAltura = novaALtura;
        }
        if (novaALtura > 2)
        {
            qtdMaior2m++;
        }
    }

    printf("\nMedia: %.5f", (somaAlturas / NUMERO_PESSOAS));
    printf("\nMaior: %.2f", maiorAltura);
    printf("\nQuantidade maiores de 2m: %d", qtdMaior2m);

    getchar();
    return 0;
}
