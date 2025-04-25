const float CM_POR_POLEGADA = 2.54; // Define a constante de conversão

void setup() {
  Serial.begin(9600);
  Serial.println("Conversor CM -> POL");
}

void loop() {
  Serial.println("\nDigite os centimetros:");
  
  while (!Serial.available());
  float centimetros = Serial.parseFloat();
  while (Serial.available()) Serial.read();
  
  float polegadas = centimetros / CM_POR_POLEGADA;
  
  Serial.print(centimetros);
  Serial.print(" cm = ");
  Serial.print(polegadas, 3); // 3 casas decimais
  Serial.println(" pol");
  
  delay(1500);
}