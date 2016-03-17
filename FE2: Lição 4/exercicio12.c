/**
 * Faça um programa que exiba um menu com as opções “1–Multiplicar”,
 * “2–Somar”, “3–Subtrair” e “4–Dividir”. Leia a opção desejada,
 * leia dois valores reais, execute a operação e exiba o resultado.
 * Utilize, obrigatoriamente, o comando switch na solução.
**/

#include<stdio.h>

int main()
{
    int a, b, operacao;
    float resultado;

    printf("Valor A:");
    scanf("%i", &a);

    printf("Valor B:");
    scanf("%i", &b);

    printf("\nEscolha uma das operacoes abaixo:\n1–Multiplicar\n2–Somar\n3–Subtrair\n4–Dividir\n\n");
    printf("Operacao:");
    scanf("%i", &operacao);

    switch(operacao)
    {
    case 1:
        resultado = a * b;
        printf("Resultado: %d * %d = %.2f\n", a, b, resultado);
        break;
    case 2:
        resultado = a + b;
        printf("Resultado: %d + %d = %.2f\n", a, b, resultado);
        break;
    case 3:
        resultado = a - b;
        printf("Resultado: %d - %d = %.2f\n", a, b, resultado);
        break;
    case 4:
        resultado = a / b;
        printf("Resultado: %d / %d = %.2f\n", a, b, resultado);
        break;
    default:
        printf("Operacao invalida!\n");
        break;
    }

    getchar();
    return 0;
}

