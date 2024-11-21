#include "bmp.h"

int main() {
    uint8_t* pixel_data = nullptr;
    int width, height;

    // Загружаем изображение
    if (!loadBMP("input.bmp", pixel_data, width, height)) {
        std::cerr << "Не удалось загрузить изображение!" << std::endl;
        return -1;
    }

    // Поворачиваем изображения
    uint8_t* rotated_clockwise = new uint8_t[height * width * 3]; // Поменяйте местами ширину и высоту
    if (pixel_data == nullptr || rotated_clockwise == nullptr) {
        std::cerr << "Ошибка выделения памяти!" << std::endl;
        return 1;
    }

    rotateClockwise(pixel_data, rotated_clockwise, height, width);
    saveBMP("rClockwise.bmp", rotated_clockwise, height, width);  // меняем ширину и высоту местами

    uint8_t* rotated_counterclockwise = new uint8_t[width * height * 3];
    rotateCounterClockwise(pixel_data, rotated_counterclockwise, width, height);
    saveBMP("rCounterClockwise.bmp", rotated_counterclockwise, height, width);  // меняем ширину и высоту местами

    delete[] pixel_data;
    delete[] rotated_clockwise;
    delete[] rotated_counterclockwise;

    return 0;
}