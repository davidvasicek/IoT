#define RELAYPIN 2  

void setup() {
  
  pinMode(RELAYPIN, OUTPUT);
}

void loop() {
  
  digitalWrite(RELAYPIN, HIGH);   // turn the RELAY on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(RELAYPIN, LOW);    // turn the RELAY off by making the voltage LOW
  delay(1000);                       // wait for a second
}
