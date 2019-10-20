#include <iostream>
#include <library.hpp>

#include <extract_bits_traditional_pass.hpp>

void hello() {
    ExtractBits * extractBits = new ExtractBitsTraditionalPass();
    extractBits->summationOfSetBits(88);
    delete extractBits;
    extractBits = nullptr;
    std::cout << "Hello, World!" << std::endl;
}
