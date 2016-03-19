/**
 * Fazer um programa que leia três valores reais: X, Y e Z, correspondentes
 * aos lados de um triângulo. Com isso, execute as seguintes verificações:
 *
 * a. Verificar se X, Y e Z podem ser os comprimentos dos lados de um triângulo;
 * b. Em caso posittivo, verificar se é um triângulo eqüilátero, isósceles ou escaleno.
 * c. Em caso negativo, escrever uma mensagem.
 *
 * Dica: O comprimento de cada lado de um triângulo é menor do que a soma dos
 * comprimentos dos outros dois lados.
**/

#include<stdio.h>

int main()
{
    int x, y, z;

    printf("Digite X: ");
    scanf("%i", &x);

    printf("Digite Y: ");
    scanf("%i", &y);

    printf("Digite Z: ");
    scanf("%i", &z);

    if (x < (y + z) && y < (x + z) && z < (x + y))
    {
        if (x == y && y == z)
        {
            printf("Triangulo Equilatero!");
        }
        else if (x == y || x == z || y == z)
        {
            printf("Triangulo Isosceles!");
        }
        else
        {
            printf("Triangulo Escaleno!");
        }
    }
    else
    {
        printf("Triangulo Invalido!");
    }

    getchar();
    return 0;
}
