//Inclui a biblioteca do termistor
#include <Thermistor.h>

//Configura o termistor na porta analógica para 0
Thermistor temp(0);

//Define as variáveis
const int led_red = 13;
const int led_green = 10;

void setup()
{
  Serial.begin(9600);
  pinMode(led_red, OUTPUT);
  pinMode(led_green, OUTPUT);
  
  digitalWrite(led_red, LOW);
  digitalWrite(led_green, LOW);
}

void loop()
{
  int temperatura = temp.getTemp(); //obtem a temperatura do local
  
  serial.print("A temperatura do local é: ");
  serial.print(temperatura); //printar na tela a temperatura
  serial.println("oC");
  
  if (temperatura > 30){
    digitalWrite(led_red, HIGH);
    digitalWrite(led_green, LOW);
  } else {
    digitalWrite(led_green, HIGH);
    digitalWrite(led_red, LOW);
  }
  
  delay(1000); //A cada 1 segundo será realizado uma nova leitura
}