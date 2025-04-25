// C++ code
//Faça um programa que receba o nome, cargo e salário de um funcionário. Calcule o
//salário acrescido de 10%. Ao final exiba o nome, o cargo e o novo salário desse
void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
  Serial.println("Sistema de Ajuste Salarial");
  Serial.println("-------------------------");
  Serial.println("Aumento de 10% no salario");
}

void loop() {
  String nome, cargo;
  float salario, novoSalario;
  
  // Limpa o buffer serial
  while (Serial.available()) Serial.read();
  
  // Solicita e recebe o nome
  Serial.println("\nDigite o nome do funcionario:");
  while (!Serial.available()); // Aguarda entrada
  nome = Serial.readStringUntil('\n');
  nome.trim(); // Remove espaços extras
  
  // Solicita e recebe o cargo
  Serial.println("Digite o cargo do funcionario:");
  while (!Serial.available());
  cargo = Serial.readStringUntil('\n');
  cargo.trim();
  
  // Solicita e recebe o salário
  Serial.println("Digite o salario atual:");
  while (!Serial.available());
  salario = Serial.parseFloat();
  while (Serial.available()) Serial.read(); // Limpa buffer
  
  // Calcula o novo salário
  novoSalario = salario * 1.10; // Aumento de 10%
  
  // Exibe os resultados
  Serial.println("\nDados Atualizados:");
  Serial.print("Nome:    ");
  Serial.println(nome);
  Serial.print("Cargo:   ");
  Serial.println(cargo);
  Serial.print("Salario antigo: R$ ");
  Serial.println(salario, 2);
  Serial.print("Novo salario:   R$ ");
  Serial.println(novoSalario, 2); // Mostra com 2 casas decimais
  
  Serial.println("-------------------------");
  delay(3000); // Espera 3 segundos antes de reiniciar
}
