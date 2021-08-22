#ifndef Controller_h
#define Controller_h

#include <eurorack.h>
#include "hwconfig.h"

#define CHANNELS 4
#define OUTPUTS 8

class Controller {
    public:
        virtual void init() = 0;
        virtual void process() = 0;
};

#endif