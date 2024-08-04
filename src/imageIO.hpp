#ifndef IMAGE_IO_HPP
#define IMAGE_IO_H
#define STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION
// #define STBI_MALLOC
// #define STBI_REALLOC
// #define STBI_FREE

#include <iostream>
#include <vector>
#include <string>

std::vector<uint8_t> loadImage(const std::string &filepath, int &width, int &height, int &channels);
void saveImage(const std::string &filepath, const std::vector<uint8_t> &data, int width, int height, int channels);

#endif // IMAGE_IO_HPP
