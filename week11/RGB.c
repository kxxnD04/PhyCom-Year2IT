// กำหนดพอร์ตสำหรับ LED RGB
const int RED_PIN = 10;    // ขา Blue
const int GREEN_PIN = 9;  // ขา pink
const int BLUE_PIN = 8;   // ขา Yellow

void setup() {
// initialize digital pin LED_BUILTIN as an output.
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}
// the loop function runs over and over again forever
void loop() {
  // ม่วง
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW); // turn the LED on (HIGH is the voltage level)
  digitalWrite(8, HIGH);

  delay(150); // wait for a second

  digitalWrite(10, LOW);
  digitalWrite(9, LOW); // turn the LED on (HIGH is the voltage level)
  digitalWrite(8, LOW);
  // คราม 
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH); // turn the LED on (HIGH is the voltage level)
  digitalWrite(8, HIGH);

  delay(150); // wait for a second

  digitalWrite(10, LOW);
  digitalWrite(9, LOW); // turn the LED on (HIGH is the voltage level)
  digitalWrite(8, LOW);
  
  // น้ำเงิน
  digitalWrite(10, LOW);
  digitalWrite(9, LOW); // turn the LED on (HIGH is the voltage level)
  digitalWrite(8, HIGH);

  delay(150); // wait for a second

  digitalWrite(10, LOW);
  digitalWrite(9, LOW); // turn the LED on (HIGH is the voltage level)
  digitalWrite(8, LOW);

  // เขียว
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH); // turn the LED on (HIGH is the voltage level)
  digitalWrite(8, LOW);

  delay(150); // wait for a second

  digitalWrite(10, LOW);
  digitalWrite(9, LOW); // turn the LED on (HIGH is the voltage level)
  digitalWrite(8, LOW);
  
  // เหลือง
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH); // turn the LED on (HIGH is the voltage level)
  digitalWrite(8, LOW);

  delay(150); // wait for a second

  digitalWrite(10, LOW);
  digitalWrite(9, LOW); // turn the LED on (HIGH is the voltage level)
  digitalWrite(8, LOW);

  // แสด
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW); // turn the LED on (HIGH is the voltage level)
  digitalWrite(8, LOW);

  delay(150); // wait for a second

  digitalWrite(10, LOW);
  digitalWrite(9, LOW); // turn the LED on (HIGH is the voltage level)
  digitalWrite(8, LOW);

  // ขาว

  digitalWrite(10, LOW);
  digitalWrite(9, LOW); // turn the LED on (HIGH is the voltage level)
  digitalWrite(8, LOW);
  delay(150); // wait for a second
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH); // turn the LED on (HIGH is the voltage level)
  digitalWrite(8, HIGH);

}
