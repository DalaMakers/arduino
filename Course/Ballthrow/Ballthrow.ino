int speeds[] = {10, 20, 30, 40};
int angles[] = {15, 30, 45, 60, 75};
bool flag = false;

void setup() {
  Serial.begin(9600);


  Serial.println("*****************************************");


  Serial.print("* Speed (m/s)");
  Serial.print("* Angle(degrees)");
  Serial.println("* Range(m) *    ");
  Serial.println("*****************************************");
}

void loop() {
  if (flag == false) {
    for (int i = 0; i <= 3; i ++) {
      for (int j = 0; j <= 4; j ++) {
        float radians = 3.1416 / 180 * angles[j];
        float range = speeds[i] * speeds[i] * sin(2 * radians) / 9.8;
        Serial.print("*     ");
        Serial.print(speeds[i]);
        Serial.print("     *       ");
        Serial.print(angles[j]);
        Serial.print("      *   ");
        if (range < 10) {
          Serial.print(range, 3);
        }
        else if (range < 100) {
          Serial.print(range, 2);
        }
        else if (range > 100) {
          Serial.print(range, 1);
        }
        Serial.println("  *");

      }
    }
    Serial.println("*****************************************");
    flag = true;
  }
}
