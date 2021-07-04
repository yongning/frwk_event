#pragma once

#include "event2/event_struct.h"

namespace Event {

class ImplBase {
protected:
    ~ImplBase();

    event raw_event_;
};

}
