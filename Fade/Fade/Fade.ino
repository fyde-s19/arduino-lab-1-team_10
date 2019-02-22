void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void dimmer (int freq, int duty){
  int period, onTime, offTime;
  period = 1000 / freq;
  onTime = period * duty/100;
  offTime = period - onTime;
  digitalWrite(LED_BUILTIN,HIGH);
  delay(onTime);
  digitalWrite(LED_BUILTIN,LOW);
  delay(offTime);
  
}

// the loop function runs over and over again forever
void loop() {
  dimmer(10, 90);                       
}
