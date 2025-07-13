#include "crc32_parallel_64bit_input.hpp"
#include <iostream>

std::uint8_t CLK;
std::uint8_t nRST;
std::uint8_t valid;
std::uint8_t crc_init;
std::uint64_t data_in;

void reset_input_crc32_parallel_64bit() {
    CLK = 0;
    nRST = 0;
    valid = 0;
    crc_init = 0;
    data_in = 0;
}

void drive_input_crc32_parallel_64bit(std::uint8_t CLK_in, std::uint8_t nRST_in, std::uint8_t valid_in, std::uint8_t crc_init_in, std::uint64_t data_in_in) {
    CLK = CLK_in;
    nRST = nRST_in;
    valid = valid_in;
    crc_init = crc_init_in;
    data_in = data_in_in;
}
