#ifndef Hardware_h
#define Hardware_h

#include <Arduino.h>
#include <eurorack.h>
#include "hwconfig.h"

class Hardware {
    public:
        static Hardware hw;
        void init();

        DigitalInput(ENCODER_BTN_PIN);

        RotaryEncoder encoder = RotaryEncoder(ENCODER_PIN1, ENCODER_PIN2);
        PushButton<> encoderButton = PushButton<>(DENCODER_BTN_PIN);

        TriggerInput resetInput = TriggerInput(RESET_PIN);
        TriggerInput clockInput = TriggerInput(CLOCK_PIN);
        TriggerInput triggerInputs[4] = {
            TriggerInput(TRIGGER1_PIN, true, false),
            TriggerInput(TRIGGER2_PIN, true, false),
            TriggerInput(TRIGGER3_PIN, true, false),
            TriggerInput(TRIGGER4_PIN, true, false)
        };

        DigitalOutput(SWITCH1_PIN)
        DigitalOutput(SWITCH2_PIN)
        DigitalOutput(SWITCH3_PIN)
        DigitalOutput(SWITCH4_PIN)
        DigitalOutput(SWITCH5_PIN)
        DigitalOutput(SWITCH6_PIN)
        DigitalOutput(SWITCH7_PIN)
        DigitalOutput(SWITCH8_PIN)

        DigitalOutputPin<> switches[8] = {
            DSWITCH1_PIN,
            DSWITCH2_PIN,
            DSWITCH3_PIN,
            DSWITCH4_PIN,
            DSWITCH5_PIN,
            DSWITCH6_PIN,
            DSWITCH7_PIN,
            DSWITCH8_PIN
        };


};

#endif