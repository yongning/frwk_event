#pragma once

#include "c_smart_ptr.h"

struct event_base;
extern "C" {
void event_base_free(event_base);
}

struct evconnlistener;
extern "C" {
void evconnlistener_free(evconnlistener*);
}

namespace Event {
namespace Libevent {

class Global {
public:
    static bool initialized() { return initialized_; }

    static void initialize();

private:
    static bool initialized_;
};

using BasePtr = CSmartPtr<event_base, event_base_free>;

}
}
