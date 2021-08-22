#ifndef SequentialSwitchController_h
#define SequentialSwitchController_h

#include <eurorack.h>
#include "Controller.h"

class SequentialSwitchController : public Controller {
    public:
        virtual void init();
        virtual void process();

    private:
        uint8_t activeSwitch;

};

#endif