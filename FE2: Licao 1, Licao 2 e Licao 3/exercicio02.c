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

/* Faça um programa que receba o salário-base de um funcionário,
calcule e mostre o salário a receber, sabendo-se que esse funcionário recebe gratificação
 de 5% sobre o salário-base e paga imposto de 7% sobre o salário-base.*/


