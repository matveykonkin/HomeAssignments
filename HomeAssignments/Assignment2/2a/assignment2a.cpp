/*
## Assignment2a
## Author
Konkin Matvey B83-mm
## Contacts
st135668@student.spbu.ru
## Description
HomeAssignment 2a
*/

#include <iostream>
#include <fstream>
#include <filesystem>

int main() {
    std::ifstream infile("filein.bin", std::ios::binary | std::ios::in);
    if (!infile) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    size_t file_size = std::filesystem::file_size("filein.bin");

    char* buffer = new char[file_size];

    infile.read(buffer, file_size);

    for (size_t i = 0; i < file_size / 2; ++i) {
        std::swap(buffer[i], buffer[file_size - i - 1]);
    }

    std::ofstream outfile("fileout.bin", std::ios::binary | std::ios::out);
    outfile.write(buffer, file_size);

    delete[] buffer;
    infile.close();
    outfile.close();

    return 0;
}