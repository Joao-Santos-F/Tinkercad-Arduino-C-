// C++ code
//

long adn = 0;
long ano = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("digite o ano que nasceu");//mostra mnsg na tela
  while ( !Serial.available() ); //espera o usuario dar enter
  adn = Serial.parseInt();//transforma a idade digitada em numero

  Serial.println("em que ano voce esta");//mostra mnsg na tela
  while ( !Serial.available() ); //espera o usuario dar enter
  ano = Serial.parseInt();//transforma a idade digitada em numero

  long idadeano = ano - adn;
  long idademes = idadeano * 12;
  long idadesemanas = idademes * 4;
  
    Serial.println("idade em semanas: " + String(idadesemanas) ); //imprime o texto
}
