long Length;
bool flag = false;

void setup() {
  Serial.begin(9600);
}

void loop() {

  if (Serial.available() > 0) {
    Length = Serial.read();
    Length = Length - 48;
    Serial.print("Face Area   ");
    Serial.println(cubeFaceArea());
    Serial.print("Volume    ");
    Serial.println(cubeVolume());
    Serial.print("Face Diagonal   ");
    Serial.println(cubeFaceDiagonal());
    Serial.print("Volume Diagonal   ");
    Serial.println(cubeVolumeDiagonal());
  }
}



float cubeFaceArea() {
  float FaceArea;
  FaceArea = Length * Length;
  return FaceArea;
}

float cubeVolume() {
  float Volume;
  Volume = pow(Length, 3);  //Length * Length * Length
  return Volume;
}

float cubeFaceDiagonal() {
  float Total;
  Total = Length * sqrt(2);
  return Total;
}

float cubeVolumeDiagonal() {
  float Total;
  Total = Length * sqrt(3);
  return Total;
}
