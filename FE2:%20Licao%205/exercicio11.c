/**
 * 11. Uma pesquisa foi realizada entre os habitantes de uma cidade e foram
 * coletados dados referentes ao salário e ao número de filhos. Faça um
 * programa que leia os dados, calcule e mostre:
 *
 * a) A média dos salários da população;
 * b) A média do número de filhos;
 * c) O maior salário;
 * d) A percentagem de pessoas com salários até R$ 500,00.
 *
 * Para finalizar a leitura de dados, o usuário deverá informar um salário
 * com valor negativo.
 */

#include<stdio.h>

int main()
{
    int filhos, contador;
    float salario, mediaFilhos, mediaSalarios, maiorSalario, porcentagemAte500;

    mediaFilhos = 0;
    mediaSalarios = 0;
    maiorSalario = 0;
    porcentagemAte500 = 0;
    contador = 0;

    do
    {
        printf("Digite o Salario e o Numero de Filhos da Pessoa %d: ", contador + 1);
        scanf("%f %d", &salario, &filhos);

        if(salario < 0)
        {
            break;
        }
        else if(salario <= 500)
        {
            porcentagemAte500++;
        }

        mediaFilhos += filhos;
        mediaSalarios += salario;

        if(salario > maiorSalario)
        {
            maiorSalario = salario;
        }

        contador++;
    }
    while (1);

    if(contador > 0) {
        mediaFilhos = mediaFilhos/contador;
        mediaSalarios = mediaSalarios/contador;
        porcentagemAte500 = porcentagemAte500/contador * 100;

        printf("\nMedia de Filhos: %.2f", mediaFilhos);
        printf("\nMedia de Salarios: %.2f", mediaSalarios);
        printf("\nMaior Salario: %.2f", maiorSalario);
        printf("\nPorcentagem de Salarios menores que R$500: %.2f%\n", porcentagemAte500);
    }

    getchar();
    return 0;
}



