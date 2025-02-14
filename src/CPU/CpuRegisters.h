#pragma once

/*
    A (acc/arg)    F (flags)
    B   C
    D   E
    H(addr.)    L(addr.)
*/

#include<cstdint>
namespace CPU
{
    class Registers
    {
    public:
        uint8_t A{};
        uint8_t B{};
        uint8_t C{};
        uint8_t D{};
        uint8_t E{};
        uint8_t H{};
        uint8_t L{};
        //F for ALU(Arithmetic Logic Unit) flags
        //7 6 5 4 3 2 1 0
        //Z N H C 0 0 0 0 FLAGS. Lower nibbles always zero!
        uint8_t F{};

        // The program counter points to the next instruction.
        uint16_t program_counter{};
        // The Stack Pointer points to the next unused space, of the stack
        uint16_t stack_pointer{};
    };
}