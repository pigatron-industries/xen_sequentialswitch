#include "SequentialSwitchController.h"
#include "../Hardware.h"

void SequentialSwitchController::init() {
    activeSwitch = 0;
    Hardware::hw.switches[0].setValue(true);
    Hardware::hw.switches[1].setValue(true);
    Hardware::hw.switches[2].setValue(true);
    Hardware::hw.switches[3].setValue(true);
    Hardware::hw.switches[4].setValue(true);
    Hardware::hw.switches[5].setValue(true);
    Hardware::hw.switches[6].setValue(true);
    Hardware::hw.switches[7].setValue(true);
}

void SequentialSwitchController::process() {
    //Serial.println(digitalRead(TRIGGER4_PIN));

    if(Hardware::hw.clockInput.didRise()) {
        Serial.println("clock");
    }

    if(Hardware::hw.resetInput.didRise()) {
        Serial.println("reset");
    }

    if(Hardware::hw.triggerInputs[0].update() && Hardware::hw.triggerInputs[0].didRise()) {
        Serial.println("trigger1");
    }

    if(Hardware::hw.triggerInputs[1].update() && Hardware::hw.triggerInputs[1].didRise()) {
        Serial.println("trigger2");
    }

    if(Hardware::hw.triggerInputs[2].update() && Hardware::hw.triggerInputs[2].didRise()) {
        Serial.println("trigger3");
    }

    if(Hardware::hw.triggerInputs[3].update() && Hardware::hw.triggerInputs[3].didRise()) {
        Serial.println("trigger4");
    }
}
