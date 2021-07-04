#pragma once

#include <cstdint>
#include <functional>
#include <memory>

namespace Event {

struct FileReadyType {
    static const uint32_t Read = 0x1;
    static const uint32_t Write = 0x2;
    static const uint32_t Closed = 0x4;
};

enum class FileTriggerType { Level, Edge };

static constexpr FileTriggerType PlatformDefaultTriggerType { FileTriggerType::Edge };

using FileReadyCb = std::function<void(uint32_t events)>;

class FileEvent {
public:
    virtual ~FileEvent() = default;

    virtual void activate(uint32_t events) = 0;

    virtual void setEnabled(uint32_t events) = 0;
};

using FileEventPtr = std::unique_ptr<FileEvent>;

} 
