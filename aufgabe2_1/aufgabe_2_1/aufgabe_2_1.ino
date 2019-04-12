#include <DueTimer.h>

#define PIN_YELLOW_LED (7)
#define PIN_BTN (5)

DueTimer timer;

boolean led_state = LOW;

void setup()
{
  pinMode(PIN_YELLOW_LED, OUTPUT);
  pinMode(PIN_BTN, INPUT);
  attachInterrupt(digitalPinToInterrupt(PIN_BTN), foo, FALLING)

}

void loop()
{
  // idle
}

void change_led_state () {
  led_state = not led_state;
  digitalWrite(PIN_YELLOW_LED, led_state);
}

void foo () {
  if(timer.configure(1, test) {
    timer.start
    }
  }

void test () {
  
}
 

