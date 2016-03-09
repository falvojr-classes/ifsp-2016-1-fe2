#include <stdio.h>

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
