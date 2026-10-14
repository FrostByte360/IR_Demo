/*=====================================================
                  IR SENSOR DEMO
=======================================================
Description:
  This program demonstrates the functionality of an in-
  frared sensor, wherein each input is registered, read,
  and monitored through the IDE's serial monitor.

Programmer:
  Mark Garcia

Date:
  14 Oct 2026
*/

// GPIO Pins
const int ir_pin = 36;

// Variables
int ir_counter = 0;
int ir_inputval = 0;

void setup()  {
  pinMode(ir_pin, INPUT);

  Serial.begin(9600);
}

void loop() {
  ir_inputval = digitalRead(ir_pin);

  if (!ir_inputval)  {
    ir_counter++;

    Serial.printf("Objects Detected: %d\n", ir_counter);
    delay(500);
  }
}