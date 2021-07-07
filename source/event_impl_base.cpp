#include "event_impl_base.h"

#include "event2/event.h"

namespace Event {

ImplBase::~ImplBase() {
    event_del(&raw_event_);
}
}
