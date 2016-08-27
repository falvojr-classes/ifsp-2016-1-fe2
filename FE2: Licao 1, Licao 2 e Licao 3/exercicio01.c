/**
 * 1.Escreva um programa que leia 3 valores reais: a, b, c.
 * Calcule e escreva a média aritmética.
 */

#include <stdio.h>

#define QTD_VALORES 3

int main() {
	float a, b,c,media;

	printf("Informe o valor de a: ");
	scanf("%f",&a);
	printf("Informe o valor de b: ");
	scanf("%f",&b);
	printf("Informe o valor de c: ");
	scanf("%f",&c);
	//ou
	printf("Informe os valores de a, b e c: ");
	scanf("%f %f %f", &a, &b, &c);

	media  = (a+b+c)/QTD_VALORES;

	printf("A media aritmetica eh: %.2f", media);

	getchar();
	return 0;
}
