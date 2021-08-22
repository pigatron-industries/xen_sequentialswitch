#include <Arduino.h>

#include "hwconfig.h"
#include "MainController.h"
#include "controllers/SequentialSwitchController.h"

MainController mainController = MainController();
SequentialSwitchController sequentialSwitchController = SequentialSwitchController();


void setup() {
    Serial.begin(SERIAL_BAUD);
    Serial.println();
    Serial.println("==============================================");
    Serial.println("*     Pigatron Industries Euclidean Logic    *");
    Serial.println("==============================================");
    Serial.println();

    mainController.registerController(sequentialSwitchController);
    mainController.init();
    
    pinMode(13, OUTPUT);
    digitalWrite(13, HIGH);
}

void loop() {
    mainController.process();
}
