int led = 13;
int sensor = A0;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  if(analogRead(sensor) > 512) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}


