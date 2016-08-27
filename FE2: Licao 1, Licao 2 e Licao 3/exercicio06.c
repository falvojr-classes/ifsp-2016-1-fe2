/*6- Para sabermos quanto vamos pagar pela conta de energia elétrica, 
multiplicamos a potência do eletrodoméstico (watts) pelo número médio de 
horas que o mesmo permanece ligado por dia. Sabendo-se que o quilowatt-hora (kwh)
custa R$ 0.39, faça um programa em linguagem C que receba a potência do 
eletrodoméstico (watts),o tempo que ele fica ligado por dia (horas), calcule e mostre: 
a. Quantos kwh o eletrodoméstico gasta num mês; 
b. O valor, em reais, a ser pago num mês com desconto de 15%; 
c. Quantos kwh o eletrodoméstico gasta num ano. */

#include <stdio.h>

int main()
{
	float potenciaW, potenciaKw, qtdHorasDia, kwhMes, kwhAno, valorAPagar;	
	
	printf("Informe a potencia do eletrodomestico: ");
	scanf("%f",&potenciaW);
	printf("Informe o tempo que ele fica ligado por dia:");
	scanf("%f", &qtdHorasDia);
	
	potenciaKw = potenciaW / 1000;
	kwhMes = potenciaKw * qtdHorasDia * 30;
	valorAPagar = kwhMes * 0.39;
	
	// valorAPagar = valorAPagar - (valorAPagar * (15/100.0)); [desconto de 15%] OU
	// valorAPagar = valorAPagar * (85/100.0); [desconto de 15%, considerando 85% do valor a pagar] OU
	valorAPagar = valorAPagar * 0.85;
	
	// kwhAno = potenciaKW * qtdHorasDia * 365; [dias do ano] OU
	kwhAno = kwhMes * 12;

	printf("Gasto KWH no mes: %.2f \n",kwhMes);
	printf("Valor a ser pago com desconto: %.2f \n",valorAPagar);
	printf("Gasto KWH num ano: %.2f \n",kwhAno);
	
	getchar ();
	return 0;
}
