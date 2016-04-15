/**
 * 9. Fazer um programa em linguagem C para ler um número não determinado de conjuntos
 * de valores, cada um formado pelo código de um aluno e suas 3 notas. Calcular, para
 * cada aluno, a média ponderada com pesos respectivos de 4 para a maior nota e 3 paras as
 * outras duas. Escrever o número do aluno, suas 3 notas, a média calculada e uma
 * mensagem "aprovado" se nota >= 6 ou "reprovado" para nota < 6. O processamento
 * termina quando for digitado código do aluno igual a zero.
**/
#include<stdio.h>

#define PESO_MAIOR 0.4
#define PESO_MENOR 0.3
#define MEIDA_MINIMA 6

int main()
{
    int codigo = -1;
    float nota1, nota2, nota3, media;

    while(codigo != 0)
    {
        printf("Digite o Codigo do aluno: ");
        scanf("%d", &codigo);

        if(codigo == 0)
        {
            printf("Programa finalizado!\n");
            continue;
        }

        printf("Digite as 3 Notas: ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);

        printf("\nCodigo: %d", codigo);
        printf("\nNotas : %.2f, %.2f e %.2f", nota1, nota2, nota3);

        // Realiza o calculo da media ponderada
        if(nota1 >= nota2 && nota1 >= nota3)
        {
            nota1 *= PESO_MAIOR;
            nota2 *= PESO_MENOR;
            nota3 *= PESO_MENOR;
        }
        else if(nota2 > nota1 && nota2 >= nota3)
        {
            nota2 *= PESO_MAIOR;
            nota1 *= PESO_MENOR;
            nota3 *= PESO_MENOR;
        }
        else
        {
            nota3 *= PESO_MAIOR;
            nota1 *= PESO_MENOR;
            nota2 *= PESO_MENOR;
        }

        media = nota1 + nota2 + nota3;
        printf("\nMedia : %.2f (%.2f + %.2f + %.2f)", media, nota1, nota2, nota3);
        if(media < MEIDA_MINIMA)
        {
            printf("\nStatus: Reprovado por %.2f", MEIDA_MINIMA - media);
        }
        else
        {
            printf("\nStatus: Aprovado");
        }
        printf("\n\n------------------------------------------------------------------\n\n");
    }

    getchar();
    return 0;
}
