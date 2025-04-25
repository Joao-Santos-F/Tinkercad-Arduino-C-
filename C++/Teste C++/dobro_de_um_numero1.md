// C++ code
//Faça um programa que receba um número e exiba o seu dobro.


void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
  Serial.println("Calculadora do Dobro");
}

void loop() {
  int numero, dobro;
  
  Serial.println("\nDigite um numero inteiro:");
  
  // Aguarda entrada do usuário
  while (!Serial.available());
  numero = Serial.parseInt();
  
  // Calcula o dobro
  dobro = numero * 2;
  
  // Exibe o resultado
  Serial.print("O dobro de ");
  Serial.print(numero);
  Serial.print(" eh: ");
  Serial.println(dobro);
  
  // Limpa o buffer e espera um pouco
  while (Serial.available()) Serial.read();
  delay(1000);
}