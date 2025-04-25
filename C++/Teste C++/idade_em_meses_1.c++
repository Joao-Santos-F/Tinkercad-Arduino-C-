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
  
  Serial.println("digite sua idade em anos");//mostra mnsg na tela
  while ( !Serial.available() ); //espera o usuario dar enter
  idade = Serial.parseInt();//transforma a idade digitada em numero
  
  //processamento
 
  idadeMeses = idade * 12;
  idadeDias = idade * 365;
  idadeHoras = idade * 365 * 24;
  idadeMinutos = idade * 365 * 24 * 60;
  
  //Saida
  Serial.println("idade em meses: " + String(idadeMeses) ); //imprime o texto
  Serial.println("idade em dias: " + String(idadeDias) ); //imprime o texto
  Serial.println("idade em horas: " + String(idadeHoras) ); //imprime o texto
  Serial.println("idade em minutos: " + String(idadeMinutos) ); //imprime o texto
  
  delay(1000);
}
