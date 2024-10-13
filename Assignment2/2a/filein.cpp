/*
## Assignment2a
## Author
Konkin Matvey B83-mm
## Contacts
st135668@student.spbu.ru
## Description
HomeAssignment 2a
*/

#include <fstream>

int main() {
    std::ofstream outfile("filein.bin", std::ios::binary);
    for (int i = 1; i <= 9; ++i) {
        outfile.write(reinterpret_cast<const char*>(&i), sizeof(i));
    }
    outfile.close();
    return 0;
}