cmake_minimum_required(VERSION 3.10)
project(ImageCompressionUtility)

set(CMAKE_CXX_STANDARD 17)

# add_executable(ImageCompressionUtility src/main.cpp src/rleCompressor.cpp src/imageIO.cpp)
add_executable(ImageCompressionUtility src/main.cpp src/imageIO.cpp)
