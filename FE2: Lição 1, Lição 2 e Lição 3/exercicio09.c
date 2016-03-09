/**
 * 9. Faça um programa que leia o valor de um sensor de temperatura TM35, que
 * varia de 0 a 1023, onde 0 corresponde a 0 Volts e 1023 corresponde a 5 Volts.
 * Além disso, sabemos que 1ºC é igual a 10mV. Com isso, podemos considerar a
 * seguinte equação: 
 * 
 * Temperatura em ºC = (TM35 * (5V/1023)) / 10mV
 */

#include <stdio.h>  // Biblioteca dos comandos de E/S (I/O)

#define CINCO_VOLTS 5.0
#define FATOR_CINCO_VOLTS 1023
#define UM_GRAU_C_EM_VOLTS 0.01

int main( )
{
    int sensorTM35;
    float temperaturaCelsius;

    printf("Valor do sensor TM35: ");
    scanf ("%i", &sensorTM35);

    temperaturaCelsius = (sensorTM35 * (CINCO_VOLTS/FATOR_CINCO_VOLTS)) / UM_GRAU_C_EM_VOLTS;
    
    printf("Temperatura em Celsius: %.2f", temperaturaCelsius);
    
    getchar();
    return 0;
}
