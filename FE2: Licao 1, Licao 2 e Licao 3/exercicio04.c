/**
 * 4. O custo ao consumidor de um carro novo � a soma do pre�o de f�brica com o percentual de lucro do distribuidor
 * e dos impostos aplicados ao pre�o de f�brica. Fa�a um programa na Linguagem C que receba o pre�o de f�brica de
 * um ve�culo, o percentual de lucro do distribuidor e o percentual de impostos. Calcule e mostre:
 *
 * a. O valor correspondente ao lucro do distribuidor;
 * b. O valor correspondente aos impostos;
 * c. O pre�o final do ve�culo.
 */

#include <stdio.h>
int main() {
	float valorFabrica, valorFinal, valorLucro, valorImposto, percentLucro, percentImposto;

	printf("Preco do Veiculo: ");
	scanf("%f",&valorFabrica);
	printf("Percentual de lucro do Distribuidor: ");
	scanf("%f",&percentLucro);
	printf("Percentual de Imposto: ");
	scanf("%f",&percentImposto);

	valorLucro = valorFabrica * (percentLucro/100);
	valorImposto = valorFabrica * (percentImposto/100);
	valorFinal = valorFabrica + valorLucro + valorImposto;

	printf("Valor Lucro do Distribuidor: %.2f\n",valorLucro);
	printf("Valor Imposto: %.2f\n",valorImposto);
	printf("Valor Final do Veiculo: %.2f\n",valorFinal);

	getchar();
	return 0;
}
