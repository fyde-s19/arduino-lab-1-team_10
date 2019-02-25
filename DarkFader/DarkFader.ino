void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void dimmer(int freq, int duty){
  int period, onTime, offTime;
  period = 1000/freq;
  onTime = period*duty/100;
  offTime = period-onTime;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(onTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(offTime);
}
void loop() {
  dimmer (90, 10)       // put your main code here, to run repeatedly:

}
