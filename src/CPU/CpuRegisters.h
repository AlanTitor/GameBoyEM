#pragma once

#include<cstdint>

class CpuReg{
public:
    uint8_t A{};
    uint8_t B{};
    uint8_t C{};
    uint8_t D{};
    uint8_t E{};
    uint8_t H{};
    uint8_t L{};
    uint8_t F{};

    uint16_t program_counter{};
    uint16_t stack_pointer{};
};