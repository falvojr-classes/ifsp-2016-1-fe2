/**
 * 6. Para sabermos quanto vamos pagar pela conta de energia elétrica, multiplicamos a
 * potência do eletrodoméstico (watts) pelo número médio de horas que o mesmo
 * permanece ligado por dia. Sabendo-se que o quilowatt-hora (kwh) custa R$ 0,39, faça um
 * programa em linguagem C que receba a potência do eletrodoméstico (watts), o tempo
 * que ele fica ligado por dia (horas), calcule e mostre:
 * a. Quantos kwh o eletrodoméstico gasta num mês;
 * b. O valor, em reais, a ser pago num mês com desconto de 15%;
 * c. Quantos kwh o eletrodoméstico gasta num ano.
**/

#include <stdio.h> // Biblioteca dos comandos de E/S (I/O)

#define CONVERSAO_KW 1000
#define DIAS_MES 30
#define DIAS_ANO 365
#define VALOR_KWH 0.39
#define FATOR_DESCONTO 0.85

int main( )
{
    float potenciaW, potenciaKW, qtdHorasDia, kwhMes, valorMes, kwhAno;

    printf("Potencia do eletrodomestico (em watts):");
    scanf ("%f", &potenciaW);

    printf("Horas ligado por dia:");
    scanf ("%f", &qtdHorasDia);

    potenciaKW = potenciaW / CONVERSAO_KW;
    kwhMes = potenciaKW * qtdHorasDia * DIAS_MES;
    valorMes = kwhMes * VALOR_KWH * FATOR_DESCONTO;
    kwhAno = potenciaKW * qtdHorasDia * DIAS_ANO;

    printf("\nKWH Mes: %.2f", kwhMes);
    printf("\nValor Mes (com 15 porcento de desconto): %.2f", valorMes);
    printf("\nKWH Ano: %.2f", kwhAno);

    getchar();
    return 0;
}
