#ifndef PRIORITY_ENCODER_INPUT_HPP
#define PRIORITY_ENCODER_INPUT_HPP

#include <cstdint>

void reset_input_priority_encoder();
void drive_input_priority_encoder(std::uint32_t din, std::uint8_t hoho);

#endif
