#include <iostream>
#include <string>
#include "hello.h"

int main() {
    printHello("world");
    std::string input;
    while (true) {
        std::cout << "Введите текст (или 'exit' для выхода): ";
        std::getline(std::cin, input);
        if (input == "exit") {
            break;
        }
        printHello(input);
    }
    return 0;
}