// C++ code
//Faça um programa que receba o nome, o peso e a altura de uma
//pessoa. Calcule e imprima o nome e o IMC dessa pessoa - IMC = peso
// / (altura * altura).

void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
  while (!Serial); // Espera a porta serial estar pronta (para alguns Arduinos)
  
  Serial.println("Calculadora de IMC");
  Serial.println("------------------");
}

void loop() {
  String nome;
  float peso, altura, imc;
  
  // Limpa o buffer serial
  while (Serial.available()) Serial.read();
  
  // Solicita e recebe o nome
  Serial.println("\nDigite seu nome:");
  while (!Serial.available()); // Aguarda entrada
  nome = Serial.readStringUntil('\n');
  nome.trim(); // Remove espaços e quebras de linha
  
  // Solicita e recebe o peso
  Serial.println("Digite seu peso (kg):");
  while (!Serial.available());
  peso = Serial.parseFloat();
  while (Serial.available()) Serial.read(); // Limpa buffer
  
  // Solicita e recebe a altura
  Serial.println("Digite sua altura (m):");
  while (!Serial.available());
  altura = Serial.parseFloat();
  while (Serial.available()) Serial.read(); // Limpa buffer
  
  // Calcula o IMC
  imc = peso / (altura * altura);
  
  // Exibe os resultados
  Serial.println("\nResultados:");
  Serial.print("Nome: ");
  Serial.println(nome);
  Serial.print("Peso: ");
  Serial.print(peso);
  Serial.println(" kg");
  Serial.print("Altura: ");
  Serial.print(altura);
  Serial.println(" m");
  Serial.print("IMC: ");
  Serial.println(imc, 2); // Mostra com 2 casas decimais
  
  // Classificação do IMC
  Serial.print("Classificacao: ");
  if (imc < 18.5) {
    Serial.println("Abaixo do peso");
  } else if (imc < 25) {
    Serial.println("Peso normal");
  } else if (imc < 30) {
    Serial.println("Sobrepeso");
  } else if (imc < 35) {
    Serial.println("Obesidade Grau I");
  } else if (imc < 40) {
    Serial.println("Obesidade Grau II");
  } else {
    Serial.println("Obesidade Grau III");
  }
  
  Serial.println("------------------");
  delay(3000); // Espera 3 segundos antes de reiniciar
}
