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
  digitalWrite(HEAD, LOW);
  digitalWrite(MOUTH, LOW);
  digitalWrite(TAIL, LOW);

  pinMode(IN_ONE, INPUT);
  pinMode(IN_TWO, INPUT);
  digitalWrite(IN_ONE, LOW);
  digitalWrite(IN_TWO, LOW);
}

void loop() {
  bool one = (digitalRead(IN_ONE) == HIGH);
  bool two = (digitalRead(IN_TWO) == HIGH);

  if(one && !two)
  {
    //recording mode. just keep head up
    digitalWrite(HEAD, HIGH);
    digitalWrite(MOUTH, LOW);
    digitalWrite(TAIL, LOW);
  }
  else if(!one && two)
  {
    //playback mode. head up, tail down, mouth moving
    digitalWrite(HEAD, HIGH);
    digitalWrite(MOUTH, HIGH);
    digitalWrite(TAIL, LOW);
  }
  else if(one && two)
  {
    //processing mode. head up, tail moving, mouth shut
    digitalWrite(HEAD, HIGH);
    digitalWrite(MOUTH, LOW);
    digitalWrite(TAIL, HIGH);
  }
  else
  {
    //back to normal
    digitalWrite(HEAD, LOW);
    digitalWrite(MOUTH, LOW);
    digitalWrite(TAIL, LOW);
  }
}
