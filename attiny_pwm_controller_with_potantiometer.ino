

int number=0;

void setup() {

  pinMode(0, OUTPUT);
  pinMode(3, INPUT);
}


void loop() {
number=analogRead(3);
number/=4;
analogWrite(0, number);
delay(10) // (optional)
}
