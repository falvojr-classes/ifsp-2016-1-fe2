/**
 * 7. Fazer um programa em linguagem C para calcular e mostrar a
 * conversão de temperaturas em graus Celsius para
 * Fahrenheit (F = C * 1.8 + 32) de 50 a 300 graus Celsius,
 * de 3 em 3 graus.
**/
#include<stdio.h>

#define MIN 50
#define MAX 300

int main()
{
    float c, f;

    for(c = MIN; c <= MAX; c+=3)
    {
        f = c * 1.8 + 32;
        printf("%.0f C = %.2f F\n", c, f);
    }

    getchar();
    return 0;
}

