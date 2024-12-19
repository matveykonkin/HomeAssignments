/*
## Assignment6
## Author
Konkin Matvey B83-mm
## Contacts
st135668@student.spbu.ru
## Description
HomeAssignment 6
*/

#ifndef TEMPLATE_CLASS_H
#define TEMPLATE_CLASS_H

#include <iostream>
#include <vector>

template<typename ClassType, typename ParamType>
class DataProcessor {
public:
    ParamType param;
    std::vector<float> floatData;
    ClassType instance;

    DataProcessor(const ParamType& p, const std::vector<float>& data, const ClassType& obj)
        : param(p), floatData(data), instance(obj) {}

    bool execute() {
        return instance.validate(static_cast<int>(param), floatData);
    }
};

template<typename ClassType>
class DataProcessor<ClassType, int> {
public:
    int param;
    std::vector<float> floatData;
    ClassType instance;

    DataProcessor(const int& p, const std::vector<float>& data, const ClassType& obj)
        : param(p), floatData(data), instance(obj) {}

    bool execute() {
        return true;  
    }
};

template<typename ClassType>
class DataProcessor<ClassType, double> {
public:
    double param;
    std::vector<float> floatData;
    ClassType instance;

    DataProcessor(const double& p, const std::vector<float>& data, const ClassType& obj)
        : param(p), floatData(data), instance(obj) {}

    bool execute() {
        return false;  
    }
};

class MyClassA {
public:
    bool validate(int num, const std::vector<float>& data) {
        return (num > 0);
    }

    int method1() { return 1; }
    float method2() { return 1.0f; }
    void method3() { std::cout << "Output A" << std::endl; }
};

class MyClassB {
public:
    bool validate(int num, const std::vector<float>& data) {
        return !data.empty();
    }

    int method1() { return 2; }
    float method2() { return 2.0f; }
    void method3() { std::cout << "Output B" << std::endl; }
};

class MyClassC {
public:
    bool validate(int num, const std::vector<float>& data) {
        return num == -static_cast<int>(data.size());
    }

    int method1() { return 3; }
    float method2() { return 3.0f; }
    void method3() { std::cout << "Output C" << std::endl; }
};

#endif
