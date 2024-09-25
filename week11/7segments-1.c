// กำหนดขาเชื่อมต่อ 7-segment display
int A = 2, B = 3, C = 4, D = 5, E = 6, f = 7, G = 8; // กำหนดขา A-G
int port[7] = {A, B, C, D, E, f, G}; // อาเรย์เพื่อจัดเก็บหมายเลขขา
int num_array[10][7] = {  { 1,1,1,1,1,1,0 },    // 0
                          { 0,1,1,0,0,0,0 },    // 1
                          { 1,1,0,1,1,0,1 },    // 2
                          { 1,1,1,1,0,0,1 },    // 3
                          { 0,1,1,0,0,1,1 },    // 4
                          { 1,0,1,1,0,1,1 },    // 5
                          { 1,0,1,1,1,1,1 },    // 6
                          { 1,1,1,0,0,0,0 },    // 7
                          { 1,1,1,1,1,1,1 },    // 8
                          { 1,1,1,0,0,1,1 }
                       };   // 9

void setup() {
  Serial.begin(9600); // เริ่มการสื่อสารผ่าน Serial ที่ 9600 bps
  for (int i = 0; i < 7; i++) {
    pinMode(port[i], OUTPUT); // กำหนดขาทั้งหมดเป็น OUTPUT
  }
}

void loop() {
  // แสดงเลข 0 ถึง 5
  for (int num = 0; num <= 9; num++) {
    displayNumber(num); // เรียกใช้ฟังก์ชันเพื่อแสดงเลข
    delay(1000); // หน่วงเวลา 1 วินาทีก่อนแสดงเลขถัดไป
  }
}

// ฟังก์ชันสำหรับแสดงเลข 0 ถึง 9 บน 7-segment
void displayNumber(int num) {
  // ปิด segment ทั้งหมดก่อน
  for (int i = 0; i < 7; i++) {
    digitalWrite(port[i], LOW); // ปิดทุก segment
  }

  // ใช้ switch-case เพื่อตรวจสอบเลขที่ต้องการแสดง
  switch (num) {
    case 0:
      // แสดงเลข 0
      for (int i = 0; i <= 6; i++){
        if (num_array[0][i] == 1){
        digitalWrite(port[i], HIGH);
        }
      }
      break;
    case 1:
      // แสดงเลข 1
      for (int i = 0; i <= 6; i++){
        if (num_array[1][i] == 1){
        digitalWrite(port[i], HIGH);
        }
      }
      break;
    case 2:
      // แสดงเลข 1
      for (int i = 0; i <= 6; i++){
        if (num_array[2][i] == 1){
        digitalWrite(port[i], HIGH);
        }
      }
      break;
    case 3:
      // แสดงเลข 1
      for (int i = 0; i <= 6; i++){
        if (num_array[3][i] == 1){
        digitalWrite(port[i], HIGH);
        }
      }
      break;
    case 4:
      // แสดงเลข 1
      for (int i = 0; i <= 6; i++){
        if (num_array[4][i] == 1){
        digitalWrite(port[i], HIGH);
        }
      }
      break;
    case 5:
      // แสดงเลข 1
      for (int i = 0; i <= 6; i++){
        if (num_array[5][i] == 1){
        digitalWrite(port[i], HIGH);
        }
      }
      break;
    case 6:
      // แสดงเลข 1
      for (int i = 0; i <= 6; i++){
        if (num_array[6][i] == 1){
        digitalWrite(port[i], HIGH);
        }
      }
      break;
    case 7:
      // แสดงเลข 1
      for (int i = 0; i <= 6; i++){
        if (num_array[7][i] == 1){
        digitalWrite(port[i], HIGH);
        }
      }
      break;
    case 8:
      // แสดงเลข 1
      for (int i = 0; i <= 6; i++){
        if (num_array[8][i] == 1){
        digitalWrite(port[i], HIGH);
        }
      }
      break;
    case 9:
      // แสดงเลข 1
      for (int i = 0; i <= 6; i++){
        if (num_array[9][i] == 1){
        digitalWrite(port[i], HIGH);
        }
      }
      break;
}
}