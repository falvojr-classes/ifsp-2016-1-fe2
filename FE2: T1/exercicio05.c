/**
 * Fazer um programa que receba Dia, M�s, Ano e verifique se a data formada por esse
 * conjunto de informa��es � v�lida. Para isso, considere as seguintes regras:
 *
 *   Dia - Valor entre 1 e 31. Al�m disso, considerar a quantidade de dias espec�fica de cada m�s.
 *   M�s - Valor entre 1 e 12.
 *   Ano - Valor maior que 1970. Al�m disso, considerar anos bissextos na verifica��o do m�s de Fevereiro.
*/

#define ANO_MINIMO 1970

#include<stdio.h>

int main()
{
    int dia, mes, ano, diaMaximo = 0;

    printf("\nDigite o Dia, Mes e Ano:");
    scanf("%i %i %i", &dia, &mes, &ano);

    if (ano > ANO_MINIMO)
    {
        if(mes == 1 || mes == 3 ||mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        {
            diaMaximo = 31;
        }
        else if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
        {
            diaMaximo = 30;
        }
        else if(mes == 2)
        {
            if (ano%4 == 0)
            {
                diaMaximo = 29;
            }
            else
            {
                diaMaximo = 28;
            }
        }
    }

    if(diaMaximo && dia >= 1 && dia <= diaMaximo)
    {
        printf("Data Valida!");
    }
    else
    {
        printf("Data Invalida!");
    }

    getchar();
    return 0;
}
