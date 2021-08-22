#ifndef Hardware_h
#define Hardware_h

#include <Arduino.h>
#include <hardware/max11300/MAX11300.h>
#include <hardware/max11300/MAX11300Pin.h>
#include <eurorack.h>
#include "hwconfig.h"

class Hardware {
    public:
        static Hardware hw;
        void init();

        RotaryEncoder encoder = RotaryEncoder(ENCODER_PIN1, ENCODER_PIN2);
        PushButton<> encoderButton = PushButton<>(DigitalInputPin(ENCODER_BTN_PIN));

        TriggerInput resetInput = TriggerInput(RESET_PIN);
        TriggerInput clockInput = TriggerInput(CLOCK_PIN);
        TriggerInput triggerInputs[4] = {
            TriggerInput(TRIGGER1_PIN, true, false),
            TriggerInput(TRIGGER2_PIN, true, false),
            TriggerInput(TRIGGER3_PIN, true, false),
            TriggerInput(TRIGGER4_PIN, true, false)
        };

        DigitalOutputPin switches[8] = {
            DigitalOutputPin(SWITCH1_PIN),
            DigitalOutputPin(SWITCH2_PIN),
            DigitalOutputPin(SWITCH3_PIN),
            DigitalOutputPin(SWITCH4_PIN),
            DigitalOutputPin(SWITCH5_PIN),
            DigitalOutputPin(SWITCH6_PIN),
            DigitalOutputPin(SWITCH7_PIN),
            DigitalOutputPin(SWITCH8_PIN)
        };


};

#endif