#define PIN_LED 7

void setup() {
    pinMode(PIN_LED, OUTPUT);
}

void loop() {
    digitalWrite(PIN_LED, false);
    delay(1000);

    int toggle = 0;
    
    for(int i=0;i<10;i++) {
        digitalWrite(PIN_LED, toggle);
        delay(100);
        toggle ^= 1;
    }

    digitalWrite(PIN_LED, true);
    while(1) {}
}
