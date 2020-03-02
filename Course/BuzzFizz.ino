int counter;

void setup() {
  Serial.begin(9600);

}

void loop() {
  counter++;

  if (counter % 5  == 0 && counter % 3 == 0) {
    Serial.print(counter);
    Serial.println("    buzzfizz");
  } else if (counter % 3 == 0) {
    Serial.print(counter);
    Serial.println("    fizz");

  } else if (counter % 5  == 0 ) {
    Serial.print(counter);
    Serial.println("    buzz");
  } else {
    Serial.println(counter);
  }
  delay(200);
}
