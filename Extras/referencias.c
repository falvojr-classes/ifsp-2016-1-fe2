#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//Função com passagem por referencia
void dividir(int dividendo, int divisor, int *quociente, int *resto)
{
    *quociente = floor(dividendo/divisor);
    *resto = dividendo % divisor;
}

int somar(int valor1);

int main()
{
    // Exemplo 1:
    int valor1;
    valor1=5;
    valor1=somar(valor1);
    printf("%d",valor1);

    // Exemplo 2:
    int dividendo, divisor, quociente, resto;
    dividendo = 10;
    divisor = 3;

    dividir(dividendo, divisor, &quociente, &resto);

    printf("%d/%d = %d (%d)", dividendo, divisor, quociente, resto);

    getchar();
    return 0;
}

//Função normal
int somar(int valor2)
{
    valor2++;
    return valor2;
}
