#include "bmp.h"

bool loadBMP(const std::string& filename, uint8_t*& pixel_data, int& width, int& height) {
    std::ifstream file(filename, std::ios::binary);
    if (!file) {
        std::cerr << "Ошибка при открытии файла!" << std::endl;
        return false;
    }

    BMPHeader bmp_header;
    DIBHeader dib_header;

    file.read(reinterpret_cast<char*>(&bmp_header), sizeof(BMPHeader));
    file.read(reinterpret_cast<char*>(&dib_header), sizeof(DIBHeader));

    width = dib_header.width;
    height = dib_header.height;

    pixel_data = new uint8_t[width * height * 3]; // для 24-битного изображения
    file.seekg(bmp_header.offset_data, std::ios::beg);
    file.read(reinterpret_cast<char*>(pixel_data), width * height * 3);

    file.close();
    return true;
}

void saveBMP(const std::string& filename, const uint8_t* pixel_data, int width, int height) {
    BMPHeader bmp_header = {0x4D42, static_cast<uint32_t>(54 + width * height * 3), 0, 0, 54};
    DIBHeader dib_header = {40, static_cast<int32_t>(width), static_cast<int32_t>(height), 1, 24, 0, static_cast<uint32_t>(width * height * 3), 0, 0, 0, 0};

    std::ofstream file(filename, std::ios::binary);
    file.write(reinterpret_cast<const char*>(&bmp_header), sizeof(BMPHeader));
    file.write(reinterpret_cast<const char*>(&dib_header), sizeof(DIBHeader));
    file.write(reinterpret_cast<const char*>(pixel_data), width * height * 3);

    file.close();
}

void rotateClockwise(const unsigned char* src, unsigned char* dest, int width, int height) {
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            int srcIndex = (y * width + x) * 3;  // Исходный индекс пикселя
            int destIndex = ((width - 1 - x) * height + y) * 3;  // Новый индекс для поворота
            if (srcIndex >= width * height * 3 || destIndex >= height * width * 3) {
                std::cerr << "Ошибка индексации!" << std::endl;
                return;
            }


            if (srcIndex < width * height * 3 && destIndex < height * width * 3) {
                dest[destIndex] = src[srcIndex];
                dest[destIndex + 1] = src[srcIndex + 1];
                dest[destIndex + 2] = src[srcIndex + 2];
            }
        }
    }
}

void rotateCounterClockwise(const uint8_t* original, uint8_t* rotated, int width, int height) {
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            int new_x = width - 1 - y;
            int new_y = x;
            rotated[(new_y * width + new_x) * 3] = original[(y * width + x) * 3];
            rotated[(new_y * width + new_x) * 3 + 1] = original[(y * width + x) * 3 + 1];
            rotated[(new_y * width + new_x) * 3 + 2] = original[(y * width + x) * 3 + 2];
        }
    }
}