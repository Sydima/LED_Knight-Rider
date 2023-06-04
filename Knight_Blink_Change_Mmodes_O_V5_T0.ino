int pin_no;
int min_no=1000;
int max_no=4000;
int blink_time=1000;
int loop_no;
int pin_no_random;
int time_for_blinking=15000;

void setup() {
 Serial.begin(9600);
for (int pin_no=5; pin_no<8; pin_no++){
pinMode(pin_no, OUTPUT);
}
}

void loop() {
while (loop_no <10){     
  pin_no_random=random(5, 8);
  digitalWrite(pin_no_random, HIGH);
  delay(random(min_no, max_no));
  digitalWrite(pin_no_random, LOW);
  delay(blink_time*0.1);
  Serial.print(String("Blink mode E: pin_no=") + pin_no_random);
  Serial.println(String(":   loop_no=") + loop_no); 
  loop_no++;
}
for (pin_no=5; pin_no<8; pin_no++){     
  digitalWrite(pin_no, HIGH);
  delay(blink_time);
  digitalWrite(pin_no, LOW);
  delay (blink_time);
  Serial.println(String("Blink mode A: pin_no=") + pin_no);
}
for (pin_no=7; pin_no>4; pin_no--){  
  digitalWrite (pin_no,HIGH);
  delay (blink_time*2);           
  digitalWrite(pin_no, LOW);
  delay (blink_time*2);          
  Serial.println(String("Blink mode B: pin_no=") + pin_no);
}
for (pin_no=5; pin_no<8; pin_no++){
  digitalWrite(pin_no, HIGH);
  delay(blink_time*3);          
  digitalWrite(pin_no, LOW);
  delay(blink_time*3);          
  Serial.println(String("Blink mode C: pin_no=") + pin_no);
}
for (pin_no=5; pin_no<8; pin_no++){
  digitalWrite(pin_no, HIGH);
  delay(random(min_no, max_no));
  digitalWrite(pin_no, LOW);
  delay(blink_time*0.1);         
  Serial.println(String("Blink mode D: pin_no=") + pin_no);
}
while (millis() < time_for_blinking) {    
  pin_no_random=random(5, 8);
  digitalWrite(pin_no_random, HIGH);
  delay(random(min_no, max_no));
  digitalWrite(pin_no_random, LOW);
  delay(blink_time*0.1);
  Serial.print(String("Blink mode F: pin_no=") + pin_no_random);
  Serial.println(String(":   time=") + millis()); 
}
}
