/**
 * 4. O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do distribuidor
 * e dos impostos aplicados ao preço de fábrica. Faça um programa na Linguagem C que receba o preço de fábrica de
 * um veículo, o percentual de lucro do distribuidor e o percentual de impostos. Calcule e mostre:
 *
 * a. O valor correspondente ao lucro do distribuidor;
 * b. O valor correspondente aos impostos;
 * c. O preço final do veículo.
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
