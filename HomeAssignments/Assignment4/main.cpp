#include "Transformers4.h"
#include "Autobots4.h"
#include "Desepticons4.h"
#include "MiniRobots4.h"
#include <iostream>

int main() {
    Transformers t1(100, 50, 20, 75);
    Transformers t2(120, 60, 15, 80);

    Autobots a1;
    Autobots a2(130, 65, 20, 90);

    Desepticons d1;
    Desepticons d2(110, 55, 25, 85);

    MiniRobots m1;
    MiniRobots m2(65, 45, 10, 55);

    std::cout << "Transformer 1: " << t1 << std::endl;
    std::cout << "Transformer 2: " << t2 << std::endl;
    std::cout << "Autobot 1: " << a1 << std::endl;
    std::cout << "Autobot 2: " << a2 << std::endl;
    std::cout << "Desepticon 1: " << d1 << std::endl;
    std::cout << "Desepticon 2: " << d2 << std::endl;
    std::cout << "MiniRobot 1: " << m1 << std::endl;
    std::cout << "MiniRobot 2: " << m2 << std::endl;

    if (t1 > t2) {
        std::cout << "Transformer 1 is stronger that the Transformer 2" << std::endl;
    } else {
        std::cout << "Transformer 2 is stronger that the Transformer 1" << std::endl;
    }

    if (a1 < a2) {
        std::cout << "Autobot 1 is weaker that the Autobot 2" << std::endl;
    } else {
        std::cout << "Autobot 1 is stronger that the Autobot 2" << std::endl;
    }

    if (d1 > d2) {
        std::cout << "Desepticon 1 is stronger that the Decepticon 2" << std::endl;
    } else {
        std::cout << "Desepticon 1 is weaker that the Decepticon 2" << std::endl;
    }

    if (m1 > m2) {
        std::cout << "MiniRobot 1 is stronger that the MiniRobot 2" << std::endl;
    } else {
        std::cout << "MiniRobot 1 is weaker that the MiniRobot 2" << std::endl;
    }

    return 0;
}