#ifndef CRC32_PARALLEL_64BIT_INPUT_HPP
#define CRC32_PARALLEL_64BIT_INPUT_HPP

#include <cstdint>

void reset_input_crc32_parallel_64bit();
void drive_input_crc32_parallel_64bit(std::uint8_t CLK, std::uint8_t nRST, std::uint8_t valid, std::uint8_t crc_init, std::uint64_t data_in);

#endif
