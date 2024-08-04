#include "rleCompressor.hpp"

std::vector<uint8_t> RunLengthEncoding::compress(const std::vector<uint8_t> &input)
{

    std::vector<std::pair<uint8_t, int>> compressedData;
    uint8_t currentByte = input[0];
    int count = 1;

    for (size_t i = 1; i < input.size(); i++)
    {
        if (input[i] == currentByte)
        {
            count++;
        }
        else
        {
            compressedData.push_back({currentByte, count});
            currentByte = input[i];
            count = 1;
        }
    }

    compressedData.push_back({currentByte, count});

    // TODO: understand what this does
    // std::vector<uint8_t> compressedBytes;
    // for (const auto &pair : compressedData)
    // {
    //     compressedBytes.push_back(pair.first);
    //     compressedBytes.push_back(pair.second);
    // }

    // return compressedBytes;
}

std::vector<uint8_t> RunLengthEncoding::decompress(const std::vector<uint8_t> &input)
{
    return;
}