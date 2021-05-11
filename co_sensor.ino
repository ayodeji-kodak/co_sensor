const int AOUTpin = 0;
const int DOUTpin = 4;

int limit;
int value;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(DOUTpin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
value = analogRead(AOUTpin);
limit = digitalRead(DOUTpin);

Serial.print("CO value: ");
Serial.println (value);
delay(2000);
}
