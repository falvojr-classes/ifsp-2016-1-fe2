#include <stdio.h>

int main() {
	float salario, gratif, imposto;

	printf("Informe seu salario-base:");
	scanf("%f", &salario);

	gratif = salario * 0.05;
	imposto = salario * 0.07;
	salario = salario + gratif - imposto;

	printf("O seu salario eh de : %.2f reais\n",salario);

	getchar();
	return 0;
}

/* Fa�a um programa que receba o sal�rio-base de um funcion�rio,
calcule e mostre o sal�rio a receber, sabendo-se que esse funcion�rio recebe gratifica��o
 de 5% sobre o sal�rio-base e paga imposto de 7% sobre o sal�rio-base.*/


