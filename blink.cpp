#include <Arduino.h>

void setup() {
  
    pinMode(PC13, OUTPUT);   // Genelde Black Pill kartında LED PC13 pinine bağlıdır
    pinMode(PC14, OUTPUT);   // Genelde Black Pill kartında LED PC13 pinine bağlıdır
    pinMode(PC15, OUTPUT);   // Genelde Black Pill kartında LED PC13 pinine bağlıdır


}

void loop() {
    digitalWrite(PC13, LOW);   // LED ON (bazı kartlarda ters çalışabilir)
    delay(500);
    digitalWrite(PC13, HIGH);  // LED OFF
    delay(500);

     digitalWrite(PC14, LOW);   // LED ON (bazı kartlarda ters çalışabilir)
    delay(500);
    digitalWrite(PC14, HIGH);  // LED OFF
    delay(500);

     digitalWrite(PC15, LOW);   // LED ON (bazı kartlarda ters çalışabilir)
    delay(500);
    digitalWrite(PC15, HIGH);  // LED OFF
    delay(500);
}
