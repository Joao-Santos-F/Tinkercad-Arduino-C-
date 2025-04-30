// C++ code
//Faça um programa que receba a medida em polegadas e exiba esse número em
//centímetros.
float Polegadas = 2.54;

float converterParaCM(float polegadas) {
  return polegadas * Polegadas;
}

void setup() {
  Serial.begin(9600);
  Serial.println("Conversor Polegadas->CM");
}

void loop() {
  Serial.println("Digite as polegadas:");
  
  while (!Serial.available());
  float polegadas = Serial.parseFloat();
  while (Serial.available()) Serial.read();
  
  float centimetros = converterParaCM(polegadas);
  
  Serial.print(polegadas, 3);
  Serial.print(" polegadas = ");
  Serial.print(centimetros, 2);
  Serial.println(" centimetros");
  
  delay(1500);
}
