/**
 * 8. João recebeu seu salário e precisa pagar duas contas que estão atrasadas. Como as
 * contas estão atrasadas, João terá que pagar multa de 2% sobre cada conta. Faça um
 * programa que calcule e mostre quanto restará do salário do João.
**/

#include <stdio.h> // Biblioteca dos comandos de E/S (I/O)

#define FATOR_MULTA 1.02

int main( )
{
    float salario, conta1, conta2, salarioRestante;

    printf("Salario:");
    scanf ("%f", &salario);

    printf("Conta 1:");
    scanf ("%f", &conta1);

    printf("Conta 2:");
    scanf ("%f", &conta2);

    salarioRestante = salario - (conta1 * FATOR_MULTA + conta2 * FATOR_MULTA);

    printf("\nSalario restante: %.2f", salarioRestante);

    getchar();
    return 0;
}
