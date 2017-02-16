#define HEAD 0
#define MOUTH 1
#define TAIL 2
#define IN_ONE 3
#define IN_TWO 4


void setup() {
  // put your setup code here, to run once:
  pinMode(HEAD, OUTPUT);
  pinMode(MOUTH, OUTPUT);
  pinMode(TAIL, OUTPUT);

  pinMode(IN_ONE, INPUT);
  pinMode(IN_TWO, INPUT);

  digitalWrite(HEAD, LOW);
  digitalWrite(MOUTH, LOW);
  digitalWrite(TAIL, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
//  digitalWrite(HEAD, digitalRead(IN_ONE)); 
//  digitalWrite(MOUTH, digitalRead(IN_TWO)); 
//  digitalWrite(TAIL, digitalRead(IN_TWO));

  digitalWrite(HEAD, HIGH); 
  digitalWrite(MOUTH, HIGH); 
  digitalWrite(TAIL, HIGH); 
  delay(2000);
  digitalWrite(HEAD, LOW); 
  digitalWrite(MOUTH, LOW); 
  digitalWrite(TAIL, LOW);
  delay(1000);
}
