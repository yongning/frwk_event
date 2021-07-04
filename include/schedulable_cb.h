#pragma once

#include <functional>
#include <memory>

namespace Event {

class SchedulableCallback {
public:
    virtual ~SchedulableCallback() = default;

    virtual void scheduleCallbackCurrentIteration() = 0;

    virtual void scheduleCallbackNextIteration() = 0;

    virtual void cancel() = 0;

    virtual bool enabled() = 0;
};

using SchedulableCallbackPtr = std::unique_ptr<SchedulableCallback>;

class CallbackScheduler {
public:
    virtual ~CallbackScheduler() = default;

    virtual SchedulableCallbackPtr createSchedulableCallback(const std::function<void()>& cb) = 0;
};

}
