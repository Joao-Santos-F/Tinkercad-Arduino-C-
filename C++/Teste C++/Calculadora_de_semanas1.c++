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
  Serial.println("digite o ano que nasceu");
  while ( !Serial.available() );
  adn = Serial.parseInt();

  Serial.println("em que ano voce esta");
  while ( !Serial.available() );
  ano = Serial.parseInt();

  long idadeano = ano - adn;
  long idademes = idadeano * 12;
  long idadesemanas = idademes * 4;
  
    Serial.println("idade em semanas: " + String(idadesemanas) );
}
