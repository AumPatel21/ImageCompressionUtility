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
    const std::vector<std::pair<uint8_t, int>> compress(const std::vector<uint8_t> &input);
    std::vector<uint8_t> decompress(const std::vector<std::pair<uint8_t, int>> &compressedData);
};

#endif