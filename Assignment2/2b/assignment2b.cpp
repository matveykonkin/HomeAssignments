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
#include <stack>
#include <sstream>
#include <string>
#include <stdexcept>
#include <cctype>

bool isNumber(const std::string &s) {
    for (char c : s) {
        if (!std::isdigit(c) && c != '-') return false;
    }
    return true;
}

int performOperation(const std::string &op, int a, int b) {
    if (op == "+") return a + b;
    if (op == "-") return a - b;
    if (op == "*") return a * b;
    if (op == "/") return a / b;
    throw std::invalid_argument("Invalid operator");
}

int evaluateRPN(const std::string &expression) {
    std::stack<int> s;
    std::stringstream ss(expression);
    std::string token;

    while (ss >> token) {
        if (isNumber(token)) {
            s.push(std::stoi(token));
        } else {
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();
            int result = performOperation(token, a, b);
            s.push(result);
        }
    }
    return s.top();
}

int main() {
    std::string expression;
    std::cout << "Введите выражение: ";
    std::getline(std::cin, expression);

    try {
        int result = evaluateRPN(expression);
        std::cout << "Результат: " << result << std::endl; 
    } catch (const std::exception &e) {
        std::cout << "Ошибка:" << e.what() << std::endl;
    }

    return 0;
}
