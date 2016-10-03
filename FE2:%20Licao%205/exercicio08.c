/**
 * 8. José tem 1,40 metros e cresce 8 centímetros por ano, enquanto João tem 1,10 metros
 * e cresce 17 centímetros por ano. Fazer um programa em linguagem C para calcular e
 * mostrar quantos anos serão necessários para que João ultrapasse José.
**/
#include<stdio.h>

int main()
{
    float jose = 1.40, joao = 1.10;
    int anos = 0;

    while(joao <= jose)
    {
        joao += 0.17;
        jose += 0.08;
        anos++;
    }

    printf("Em %d anos, Joao ultrapassa Jose!", anos);

    getchar();
    return 0;
}

