/**
 * 12. Faça um programa que exiba um menu com as opções “1–Multiplicar”,
 * “2–Somar”, “3–Subtrair” e “4–Dividir”. Leia a opção desejada,
 * leia dois valores reais, execute a operação e exiba o resultado.
 * Utilize, obrigatoriamente, o comando switch na solução.
**/

#include<stdio.h>

#define ZERO 0

int main()
{
    int operacao;
    float a, b, resultado;

    printf("Valor A:");
    scanf("%f", &a);

    printf("Valor B:");
    scanf("%f", &b);

    printf("\nEscolha uma das operacoes abaixo:\n1–Multiplicar\n2–Somar\n3–Subtrair\n4–Dividir\n\n");
    printf("Operacao:");
    scanf("%i", &operacao);

    switch(operacao)
    {
    case 1:
        resultado = a * b;
        printf("Resultado: %.2f * %.2f = %.2f\n", a, b, resultado);
        break;
    case 2:
        resultado = a + b;
        printf("Resultado: %.2f + %.2f = %.2f\n", a, b, resultado);
        break;
    case 3:
        resultado = a - b;
        printf("Resultado: %.2f - %.2f = %.2f\n", a, b, resultado);
        break;
    case 4:
        if (b != ZERO) {
            resultado = a / b;
            printf("Resultado: %.2f / %.2f = %.2f\n", a, b, resultado);  
        } else {
            printf("Divisão invalida!\n");
        }
        
        break;
    default:
        printf("Operacao invalida!\n");
        break;
    }

    getchar();
    return 0;
}

