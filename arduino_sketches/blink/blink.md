---
heading: Blink (On and Off)
---

## Sketch Summary

The arduino board comes with a built-in LED that you can program right off the bat. It has the letter `L` next to it.

<img style="height:300px" src="/arduino_sketches/blink/images/built_in_LED.jpg"></img>

### The Sketch
From Arduino "Examples":

Go to the menu bar: `File -> Examples -> 01.Basics -> Blink`

The built-in LED is attached to digital pin 13. The variable `LED_BUILTIN` in this code is referencing pin 13.
```c
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT); // also can be pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}
```

If the code uploads to the Arduino successfully, the built-in LED should be turning on for one second, and turning off for one second repeatedly.

The `delay(1000)` line of code tells the arduino to pause the program for a set amount of milliseconds. In this case it was specified 1000 milliseconds, which is also 1 second.

Try changing these values to something smaller, like 100 milliseconds:

```c
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT); // also can be pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(100);                      // wait for a second
}
```

Uploading the code should result in a faster blinking LED.

### Connecting a Red LED

You can connect a red LED directly to pin 13 and GND on the board like this:

<img style="height:300px" src="/arduino_sketches/blink/images/LED.jpg"></img>

This will blink the red LED in sync with the built-in LED. However, you should have a resistor connected in the circuit to prevent the red LED from burning out.

To answer why that is, check out this source:

<a href="https://eepower.com/resistor-guide/resistor-applications/resistor-for-led/#">Resistors in LED circuits</a>

