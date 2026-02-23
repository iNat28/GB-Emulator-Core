#ifndef MMU_H
#define MMU_H


#include <array>
#include <cstdint>

// Memory Management Unit (MMU) for the Game Boy
class MMU {
public:
    uint8_t read(uint16_t address);
    void write(uint16_t address, uint8_t value);

private:
    // Game Boy has a 16-bit address bus
    std::array<uint8_t, 0x10000> memory;
};

#endif // MMU_H