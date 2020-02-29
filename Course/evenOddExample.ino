//putting int counter; is the same as int counter = 0;
int counter;

void setup() {
  //Start the serial port with baud rate 9600
  Serial.begin(9600);
}

void loop() {
  //counter++ is short for counter = counter + 1;
  //it increments the variable counter + 1 every loop.
  counter++;

  //if (counter % 2) means divide counter by 2 and check REMAINDER
  //if the remainder is = 0 then this statement is true.
  //we use == and not = because we its check its equivilent and not equal to.
  if (counter % 2 == 0) {
    //we then print the counter value.
    Serial.print(counter);
    //and then if the remainder is 0 print even.
    Serial.println("   Even");

    //else means if counter % 2 does not equal 2 or the remainder is 1.
  } else {
    //then print the counter and then print odd.
    Serial.print(counter);
    Serial.println("   Odd");
  }
}
