#ifndef TCP_ISN_INPUT_HPP
#define TCP_ISN_INPUT_HPP

#include <cstdint>

void reset_input_TCP_ISN();
void drive_input_TCP_ISN(std::uint8_t gen_en);

#endif
