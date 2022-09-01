int sensorH = A0;

void setup() {
 pinMode(sensorH, INPUT);
 Serial.begin(9600);

}

void loop() {
 Serial.println(analogRead(sensorH));

}
