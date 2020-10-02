int ROJO = 13;
int AMARILLO = 12;
int VERDE = 11;
int DELAY_ROJO = 5000;
int DELAY_AMARILLO = 2000;
int DELAY_VERDE = 5000;
int ROJO1 = 10;
int AMARILLO1 = 9;
int VERDE1 = 8;


void setup() {
  // put your setup code here, to run once:

 pinMode(ROJO, OUTPUT);
 pinMode(AMARILLO, OUTPUT);
 pinMode(VERDE, OUTPUT);
 pinMode(ROJO1, OUTPUT);
 pinMode(AMARILLO1, OUTPUT);
 pinMode(VERDE1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  ROJO_LUZ();
  VERDE1_LUZ();
  delay(DELAY_ROJO); 
  AMARILLO1_LUZ();
  delay(DELAY_AMARILLO);
   ROJO1_LUZ();
   VERDE_LUZ();
  delay(DELAY_VERDE); 
  AMARILLO_LUZ();
  delay(DELAY_AMARILLO);
  
}
void ROJO_LUZ()
{
  digitalWrite(ROJO, HIGH);
  digitalWrite(AMARILLO, LOW);
  digitalWrite(VERDE, LOW);
}
void AMARILLO_LUZ()
{
  digitalWrite(ROJO, LOW);
  digitalWrite(AMARILLO, HIGH);
  digitalWrite(VERDE, LOW);
}
void VERDE_LUZ()
{
  digitalWrite(ROJO, LOW);
  digitalWrite(AMARILLO, LOW);
  digitalWrite(VERDE, HIGH);
}
void VERDE1_LUZ()
{
  digitalWrite(ROJO1, LOW);
  digitalWrite(AMARILLO1, LOW);
  digitalWrite(VERDE1, HIGH);
}
void ROJO1_LUZ()
{
  digitalWrite(ROJO1, HIGH);
  digitalWrite(AMARILLO1, LOW);
  digitalWrite(VERDE1, LOW);
}
void AMARILLO1_LUZ()
{
  digitalWrite(ROJO1, LOW);
  digitalWrite(AMARILLO1, HIGH);
  digitalWrite(VERDE1, LOW);
}
