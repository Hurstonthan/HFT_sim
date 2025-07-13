#include "priority_encoder_input.hpp"
#include <iostream>

std::uint32_t din;
std::uint8_t hoho;

void reset_input_priority_encoder() {
    din = 0;
    hoho = 0;
}

void drive_input_priority_encoder(std::uint32_t din_in, std::uint8_t hoho_in) {
    din = din_in;
    hoho = hoho_in;
}
