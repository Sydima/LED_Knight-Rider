void setup() {
  // put your setup code here, to run once:
//Serial.begin(9600);
for (int pin_no=5; pin_no<8; pin_no++){
//Serial.println  (pin_no);
pinMode(pin_no, OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
for (int pin_no=5; pin_no<8; pin_no++){
digitalWrite(pin_no, HIGH);
delay(1000);
digitalWrite(pin_no, LOW);
delay (1000);
//Serial.println(pin_no);
}
}
