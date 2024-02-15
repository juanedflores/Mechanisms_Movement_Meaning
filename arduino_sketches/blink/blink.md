---
heading: Blink (On and Off)
---

## Sketch Summary

From Arduino "Examples":

### The Sketch
Most Arduinos have an on-board LED you can control. It is attached to digital pin 13. The variable `LED_BUILTIN` is referencing pin 13.
```c
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}
```
