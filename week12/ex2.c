void setup() {
    pinMode(4, INPUT_PULLUP); //sw1
    pinMode(5, INPUT_PULLUP); //sw2
    pinMode(6, INPUT_PULLUP); //sw3
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
}
void loop(){
    int sw1 = digitalRead(4);
    int sw2 = digitalRead(5);
    int sw3 = digitalRead(6);
    digitalWrite(10, 1);
    digitalWrite(11, 1);
    digitalWrite(12, 1);

    if (sw1 == 0) {  //RED
        digitalWrite(10, 0);
    }
    if (sw2 == 0) { //GREEN
        digitalWrite(11, 0);
    }
    if (sw3 == 0) { //BLUE
        digitalWrite(12, 0);
    }

}
