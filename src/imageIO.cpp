#define STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION

#include "imageIO.hpp"
#include "stb_image.h"
#include "stb_image_write.h"

std::vector<uint8_t> loadImage(const std::string &filepath, int &width, int &height, int &channels)
{
    uint8_t *data = stbi_load(filepath.c_str(), &width, &height, &channels, 0);
    if (!data)
    {
        throw std::runtime_error("Failed to load image: " + filepath);
    }

    std::vector<uint8_t> image(data, data + width * height * channels);
    stbi_image_free(data);
    return image;
}

void saveImage(const std::string &filepath, const std::vector<uint8_t> &data, int width, int height, int channels)
{
    if (!stbi_write_png(filepath.c_str(), width, height, channels, data.data(), width * channels))
    {
        throw std::runtime_error("Failed to save image: " + filepath);
    }

    std::cout << "Saved image: " << filepath << std::endl;
}