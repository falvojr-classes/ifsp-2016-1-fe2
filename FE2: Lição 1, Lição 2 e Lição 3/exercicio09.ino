#define CINCO_VOLTS 5.0
#define FATOR_CINCO_VOLTS 1023
#define UM_GRAU_C_EM_VOLTS 0.01

#define PINO_SENSOR_TM35 0

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorTM35;
  float temperaturaCelsius;

  sensorTM35 = analogRead(PINO_SENSOR_TM35);

  temperaturaCelsius = (sensorTM35 * (CINCO_VOLTS / FATOR_CINCO_VOLTS)) / UM_GRAU_C_EM_VOLTS;

  Serial.print("Temperatura em Celsius:");
  Serial.println(temperaturaCelsius);
  delay(2000);
}
