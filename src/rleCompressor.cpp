#include "rleCompressor.hpp"

/*
Use this later after implementing just grayscale compression
struct RGBData
{
    uint8_t red;
    uint8_t green;
    uint8_t blue;
    int count;
} typedef rgbData;
*/

const std::vector<std::pair<uint8_t, int>> RunLengthEncoding::compress(const std::vector<uint8_t> &input)
{
    // This will store all the compressed data
    std::vector<std::pair<uint8_t, int>> compressedData;
    uint8_t currentPixel = input[0]; // This is our first pixel value
    int count = 1;

    for (size_t i = 1; i < input.size(); i++)
    {
        if (input[i] == currentPixel)
        {
            count++;
        }
        else
        {
            compressedData.push_back({currentPixel, count});
            currentPixel = input[i];
            count = 1;
        }
    }

    compressedData.push_back({currentPixel, count});
    return compressedData;

    // TODO: understand what this does
    // std::vector<uint8_t> compressedBytes;
    // for (const auto &pair : compressedData)
    // {
    //     compressedBytes.push_back(pair.first);
    //     compressedBytes.push_back(pair.second);
    // }

    // return compressedBytes;
}

std::vector<uint8_t> RunLengthEncoding::decompress(const std::vector<std::pair<uint8_t, int>> &compressedData)
{
    std::vector<uint8_t> decompressedData;

    // Loop through the pair to extract each pixels data
    for (auto &data : compressedData)
    {
        uint8_t value = data.first;
        int count = data.second;

        // Loops for each "pair" and pushes that specific pixel "value"
        // for "count" number of times
        for (int i = 0; i < count; i++)
        {
            decompressedData.push_back(value);
        }
    }

    return decompressedData;
}