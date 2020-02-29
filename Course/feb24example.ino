int counter = 0;

String myMessage = "Hello";


void setup() {
  Serial.begin(9600);


}

void loop() {
  counter++;
  if (counter == 10) {
    Serial.println(myMessage);
  }





}
