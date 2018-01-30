int ledPin = 3; // pin, ke kterému je LED připojena (PWM pin)

void setup() {
    
    pinMode(ledPin, OUTPUT); // nastaví pin 3 jako výstup:
}

void loop() {

    analogWrite(ledPin, 0);// změní intenzitu jasu LED diody na pinu č.3 na hodnotu 0 (diodu zhasne)
       
    delay(1000);// počká 1000 milisekund

    analogWrite(ledPin, 255);// změní intenzitu jasu LED diody na pinu č.3 na maximální hodnotu. V případě 8bit PWM na hodnotu 255 (diodu rozne)
       
    delay(1000);// počká 1000 milisekund
}
