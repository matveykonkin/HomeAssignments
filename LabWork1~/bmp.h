#ifndef BMP_H
#define BMP_H

#include <iostream>
#include <fstream>

struct BMPHeader {
    uint16_t file_type; // 2 байта
    uint32_t file_size; // 4 байта
    uint16_t reserved1; // 2 байта
    uint16_t reserved2; // 2 байта
    uint32_t offset_data; // 4 байта
};

struct DIBHeader {
    uint32_t size; // 4 байта
    int32_t width; // 4 байта
    int32_t height; // 4 байта
    uint16_t planes; // 2 байта
    uint16_t bits_per_pixel; // 2 байта
    uint32_t compression; // 4 байта
    uint32_t image_size; // 4 байта
    int32_t x_pixels_per_meter; // 4 байта
    int32_t y_pixels_per_meter; // 4 байта
    uint32_t colors_used; // 4 байта
    uint32_t colors_important; // 4 байта
};

// Функции для обработки BMP изображений
bool loadBMP(const std::string& filename, uint8_t*& pixel_data, int& width, int& height);
void saveBMP(const std::string& filename, const uint8_t* pixel_data, int width, int height);
void rotateClockwise(const uint8_t* original, uint8_t* rotated, int width, int height);
void rotateCounterClockwise(const uint8_t* original, uint8_t* rotated, int width, int height);

#endif // BMP_H