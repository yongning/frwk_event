#pragma once

#include <chrono>
#include <functional>
#include <memory>

#include "time.h"
#include "schedulable_cb.h"

namespace Event {

class Dispatcher;

using TimerCb = std::function<void()>;

class Timer {
public:
    virtual ~Timer() = default;

    virtual void disableTimer() = 0;

    virtual void enableTimer(const std::chrono::milliseconds& ms,
                             const 
