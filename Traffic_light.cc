int portas[5] = {13, 12, 11, 10, 9}; //define ports used with arrays
int leitura; //variable for store value of read;

void setup()
{
//defining at ports as output for program
  pinMode(portas[0], OUTPUT);
  pinMode(portas[1], OUTPUT);
  pinMode(portas[2], OUTPUT);
  pinMode(portas[3], OUTPUT);
  pinMode(portas[4], OUTPUT); 
  
  digitalWrite(portas[0], LOW);
  digitalWrite(portas[1], LOW);
  digitalWrite(portas[2], LOW);
  digitalWrite(portas[3], LOW);
  digitalWrite(portas[4], LOW);
}

void loop() 
{
//Will activate the leds
  digitalWrite(portas[0], HIGH); 
  leitura = digitalRead(portas[0]);
  ler_green();
  digitalWrite(portas[0], LOW);
  
  digitalWrite(portas[1], HIGH);
  delay(2000);
  digitalWrite(portas[1], LOW);
  
  digitalWrite(portas[2], HIGH);
  leitura = digitalRead(portas[2]);
  ler_red();
  digitalWrite(portas[2], LOW);
}

void ler_green()
{
//Check a condition, if the led main are as 'HIGH'
  if (leitura == HIGH) {
    digitalWrite(portas[3], HIGH);
    delay(5000);
    digitalWrite(portas[3], LOW);
  } else {
    digitalWrite(portas[3], LOW);
  }
}

void ler_red()
{
//check if the led main other are as 'HIGH'
  if (leitura == HIGH) {
    digitalWrite(portas[4], HIGH);
    delay(5000);
    digitalWrite(portas[4], LOW);
  } else {
    digitalWrite(portas[4], LOW);
  }
}
