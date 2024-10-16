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
#include <sstream>
#include <string>
#include <stdexcept>
#include <cctype>

class IntStack {
private:
    int* arr;
    int capacity;
    int topIndex;

public:
    IntStack(int size = 100) : capacity(size), topIndex(-1) {
        arr = new int[capacity];
    }

    ~IntStack() {
        delete[] arr;
    }

    void push(int value) {
        if (topIndex >= capacity - 1) {
            throw std::overflow_error("Stack overflow");
        }
        arr[++topIndex] = value;
    }

    int pop() {
        if (topIndex < 0) {
            throw std::underflow_error("Stack underflow");
        }
        return arr[topIndex--];
    }

    int top() const {
        if (topIndex < 0) {
            throw std::underflow_error("Stack is empty");
        }
        return arr[topIndex];
    }

    bool isEmpty() const {
        return topIndex < 0;
    }
};

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
    if (op == "/") {
        if (b == 0) throw std::invalid_argument("Division by zero");
        return a / b;
    }
    throw std::invalid_argument("Invalid operator");
}

int evaluateRPN(const std::string &expression) {
    IntStack s;
    std::stringstream ss(expression);
    std::string token;

    while (ss >> token) {
        if (isNumber(token)) {
            s.push(std::stoi(token));
        } else {
            int b = s.pop();
            int a = s.pop();
            int result = performOperation(token, a, b);
            s.push(result);
        }
    }
    return s.top();
}

int main() {
    std::string expression;
    std::cout << "Enter expression: ";
    std::getline(std::cin, expression);

    try {
        int result = evaluateRPN(expression);
        std::cout << "Result: " << result << std::endl; 
    } catch (const std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}