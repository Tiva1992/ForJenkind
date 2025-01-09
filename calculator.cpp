// calculator.cpp 
#include <iostream>
#include <stdexcept>

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    int divide(int a, int b) {
        if (b == 0) {
            throw std::invalid_argument("Division by zero is undefined.");
        }
        return static_cast<double>(a) / b;;
    }
};
