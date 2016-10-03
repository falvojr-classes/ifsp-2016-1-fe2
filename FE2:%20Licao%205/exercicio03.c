/**
 * 3. Implemente um programa que calcule o produto de 2 número
 * inteiros X e Y. Além disso, seu algoritmo OBRIGATORIAMENTE não
 * deve utilizar operador de multiplicação (*).
 */

#include<stdio.h>

int main()
{
    int x, y, i, resultado = 0;

    printf("Digite X e Y: ");
    scanf("%d %d", &x, &y);

    for(i = 0; i < x; i++) {
        resultado += y;
    }

    printf("%d x %d = %d", x, y, resultado);

    getchar();
    return 0;
}
