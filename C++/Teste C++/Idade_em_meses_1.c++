// Faça um programa que receba a idade de uma pessoa em anos e
//imprima essa idade em: Meses, Dias, Horas, Minutos.

//Declaracao de Variaveis

int idade = 0;
int idadeMeses = 0;
int idadeDias = 0;
int idadeHoras = 0;
int idadeMinutos = 0;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //Entrada
  
  Serial.println("digite sua idade em anos");
  while ( !Serial.available() ); 
  idade = Serial.parseInt();
  
  //processamento
 
  idadeMeses = idade * 12;
  idadeDias = idade * 365;
  idadeHoras = idade * 365 * 24;
  idadeMinutos = idade * 365 * 24 * 60;
  
  //Saida
  Serial.println("idade em meses: " + String(idadeMeses) );
  Serial.println("idade em dias: " + String(idadeDias) );
  Serial.println("idade em horas: " + String(idadeHoras) ); 
  Serial.println("idade em minutos: " + String(idadeMinutos) ); 
  
  delay(1000);
}
