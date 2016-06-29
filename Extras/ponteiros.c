#include<stdio.h>

int main()
{

    // Exemplo ponteiros:
    int valor = 10;

    int *ponteiroValor;

    ponteiroValor = &valor;

    printf("Valor: %d, Endereco: %x\n", valor, &valor);
    printf("Valor: %d, Endereco: %x\n", *ponteiroValor, ponteiroValor);

    // Exemplo malloc:
    int *ponteiro;

    ponteiro = (int*) malloc(sizeof(int));

    *ponteiro = 10;

    printf("Valor: %d", *ponteiro);

    // Teste gets:
    char palavra[5];
    printf("%x\n", &palavra);
    gets(palavra);
    printf("%x\n", &palavra);

    getchar();
    return 0;
}
