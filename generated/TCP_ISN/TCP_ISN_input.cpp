#include "TCP_ISN_input.hpp"
#include <iostream>

std::uint8_t gen_en;

void reset_input_TCP_ISN() {
    gen_en = 0;
}

void drive_input_TCP_ISN(std::uint8_t gen_en_in) {
    gen_en = gen_en_in;
}
