const byte numRows = 4;  // จำนวนแถวของคีย์แพด
const byte numCols = 4;  // จำนวนคอลัมน์ของคีย์แพด

const int led_RED = 10;
const int led_GREEN = 11;
const int led_BLUE = 12;

bool is_red_on = false;
bool is_green_on = false;
bool is_blue_on = false;

// Keymap ที่กำหนดปุ่มของคีย์แพดตามแถวและคอลัมน์
char keymap[numRows][numCols] = 
{
  {'1', '2', '3', 'A'}, 
  {'4', '5', '6', 'B'}, 
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

// กำหนดการเชื่อมต่อแถวและคอลัมน์กับพอร์ต
byte rowPins[numRows] = {9, 8, 7, 6};  // กำหนดแถว
byte colPins[numCols] = {5, 4, 3, 2};  // กำหนดคอลัมน์

#define NO_KEY '\0'  // กำหนด NO_KEY เป็นค่า null character

void setup() {
    Serial.begin(9600);

    // ตั้งค่า LED พอร์ตเป็น output
    pinMode(led_RED, OUTPUT);
    pinMode(led_GREEN, OUTPUT);
    pinMode(led_BLUE, OUTPUT);

    // ตั้งค่าแถวเป็น output
    for (byte r = 0; r < numRows; r++) {
        pinMode(rowPins[r], OUTPUT);
        digitalWrite(rowPins[r], HIGH); // เริ่มต้นที่ HIGH
    }

    // ตั้งค่าคอลัมน์เป็น input pullup
    for (byte c = 0; c < numCols; c++) {
        pinMode(colPins[c], INPUT_PULLUP);
        digitalWrite(colPins[c], LOW);
    }
}

void loop() {
    char keypressed = getKey();  // เรียกใช้ฟังก์ชันเพื่อหาปุ่มที่ถูกกด
    if (keypressed != NO_KEY) {
        Serial.println(keypressed);  // แสดงปุ่มที่กดใน Serial Monitor

        switch (keypressed) {
            case '1': case '4': case '7': case '*':
                is_red_on = !is_red_on;
                digitalWrite(led_RED, is_red_on ? HIGH : LOW);
                break;

            case '2': case '5': case '8': case '0':
                is_green_on = !is_green_on;
                digitalWrite(led_GREEN, is_green_on ? HIGH : LOW);
                break;

            case '3': case '6': case '9': case '#':
                is_blue_on = !is_blue_on;
                digitalWrite(led_BLUE, is_blue_on ? HIGH : LOW);
                break;

            default:
                break;
        }
    }
}

// ฟังก์ชันอ่านค่าจากคีย์แพด
char getKey() {
    for (byte r = 0; r < numRows; r++) {
        // ตั้งค่าแถวปัจจุบันเป็น LOW เพื่อตรวจจับการกดปุ่ม
        digitalWrite(rowPins[r], LOW);
        delay(10);  // เพิ่มดีเลย์เล็กน้อยเพื่อป้องกันการอ่านซ้ำ

        // ตรวจสอบแต่ละคอลัมน์
        for (byte c = 0; c < numCols; c++) {
            if (digitalRead(colPins[c]) == LOW) {
                // รอจนกว่าปุ่มจะปล่อย
                while (digitalRead(colPins[c]) == LOW);
                digitalWrite(rowPins[r], HIGH);
                delay(50);  // ดีเลย์หลังการกดเพื่อป้องกันการอ่านซ้ำ
                return keymap[r][c];  // ส่งค่าปุ่มที่กดกลับ
            }
        }

        // ตั้งค่าแถวกลับเป็น HIGH
        digitalWrite(rowPins[r], HIGH);
    }
    return NO_KEY;  // ถ้าไม่มีปุ่มถูกกด
}
