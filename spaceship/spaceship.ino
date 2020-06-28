int switchState = 0;
int buttonPin = 2;
int greenPin = 3;
int redPin1 = 4;
int redPin2 = 5;

void setup() {
  Serial.begin(9600);

  pinMode(buttonPin, INPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin1, OUTPUT);
  pinMode(redPin2, OUTPUT);
}

void loop() {
  switchState = digitalRead(buttonPin);
  Serial.println(switchState);

  if (switchState == LOW) {
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin1, LOW);
    digitalWrite(redPin2, LOW);
  } else {
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin1, LOW);
    digitalWrite(redPin2, HIGH);

    delay(250);

    digitalWrite(redPin1, HIGH);
    digitalWrite(redPin2, LOW);

    delay(250);
  }
}
