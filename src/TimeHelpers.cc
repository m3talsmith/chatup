#include <chrono>
#include <ctime>
#include <iostream>
#include <string>

#include "include/TimeHelpers.h"

uint64_t chatup::internal::timehelpers::epoch() {
    std::chrono::time_point now = std::chrono::system_clock::now();
    return std::chrono::duration_cast<std::chrono::seconds>(now.time_since_epoch()).count();
}