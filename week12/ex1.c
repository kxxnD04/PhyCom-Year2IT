void setup() {
    pinMode(2, INPUT_PULLUP);
    pinMode(7, OUTPUT);
}
void loop(){
    int sw = digitalRead(2);
    if (sw == 0) {
        digitalWrite(7, 1);
    } else {
        digitalWrite(7, 0);
    }
}