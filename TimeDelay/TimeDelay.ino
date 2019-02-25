void setup() {
  pinMode(LED_BUILTIN, OUTPUT);     // initialize digital pin LED_BUILTIN as an output.
}

void timedBlink (int interval){     // put your setup code here, to run once:
    digitalWrite(LED_BUILTIN, HIGH);
    delay(interval*1000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000)
}

void loop() {
    timedBlink (2);                                // put your main code here, to run repeatedly:

}
