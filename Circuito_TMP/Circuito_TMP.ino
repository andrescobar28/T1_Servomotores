// C++ code
//
int pwm = 3; // pin del arduino donde se conecta el led
int brillo;
int pot = 0;

void setup()
{
  pinMode(pwm,OUTPUT);
  //analogWrite(pwm,255);
  // Las entradas analógicas no requiere inicialización
}

void loop()
{
  /*for (led = 0; led <= 255 ; led++) {
    analogWrite(pwm,led);
    delay(25);
  }
  for (led = 255; led >= 0 ; led--){
    analogWrite(pwm,led);
  }*/
  
  // Control con potenciometro
  
  // El valor de entrada analógica es de 0 a 1023
  // Se debe dividir entre 4 (en 1023 hay 4 veces 255)
  brillo = analogRead(pot)/4;
  analogWrite(pwm,brillo);
  
}