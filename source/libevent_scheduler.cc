#include "libevent_scheduler.h"

#include "schedulable_cb_impl.h"
#include "timer_impl.h"

#include "event2/util.h"

namespace Event {

LibeventScheduler::LibeventScheduler() {
    event_base* event_base = event_base_new();

