// C++ code
//Faça um programa que receba a medida em polegadas e exiba esse número em
//centímetros.
const float POL_TO_CM = 2.54; // Constante de conversão

float converterParaCM(float polegadas) {
  return polegadas * POL_TO_CM;
}

void setup() {
  Serial.begin(9600);
  Serial.println("Conversor Polegadas->CM");
}

void loop() {
  Serial.println("\nDigite as polegadas:");
  
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
