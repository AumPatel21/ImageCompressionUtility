#include <iostream>
#include <filesystem>
#include "rleCompressor.hpp"
#include "imageIO.hpp"

using namespace std;

int main()
{
    int width, height, channels;

    // Load an image from the file "input.png".
    std::vector<uint8_t> imgData = loadImage("input.png", width, height, channels);

    // cout << "Image file size: " << filesystem::file_size("input.png") << endl;

    // At this point, you can process the image data using your compression algorithm.

    // cout << "Compressed file size: " << compressedData.size() << endl;

    // Save the (possibly modified) image data to "output.png".
    // saveImage("output.png", imgData, width, height, channels);

    // std::cout << "Image processing done." << std::endl;
    return 0;
}