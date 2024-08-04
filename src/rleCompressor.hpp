#ifndef RLECOMPRESSOR_HPP
#define RLECOMPRESSOR_HPP

#include <iostream>
#include <string>
#include <vector>
#include <utility>

class RunLengthEncoding
{
public:
    // RLEcompressor();
    // ~RLEcompressor();
    std::vector<uint8_t> compress(const std::vector<uint8_t> &input);
    std::vector<uint8_t> decompress(const std::vector<uint8_t> &input);
};

#endif