/**
 * 3. Faça um programa que receba o valor de um único depósito e o valor da taxa de juros do mês,
 * calcule e mostre o valor do rendimento e o valor final total depois do rendimento de um mês.
 */

#include <stdio.h>

int main() {
	float deposito, taxa, rendimento, valor_final;

	printf("Informe o valor do deposito: ");
	scanf("%f",&deposito);
	printf("Informe a taxa de juros do mes:");
	scanf("%f",&taxa);

	rendimento = deposito * (taxa/100);
	valor_final = deposito + rendimento;

	printf("Rendimento: %.2f\n",rendimento);
	printf("Valor Final: %.2f",valor_final);

	getchar();
	return 0;
}
