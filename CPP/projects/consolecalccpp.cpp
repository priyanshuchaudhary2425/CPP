#include <iostream>

int main() {

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "Please enter num1: ";
    std::cin >> num1;

    std::cout << "Please enter num2: ";
    std::cin >> num2;

    std::cout << "What you want to do (+, -, *, /) ";
    std::cin >> op;

    switch(op) {
        case '+':
            result = num1 + num2;
            std::cout << result;
            break;
        
        case '-':
            result = num1 - num2;
            std::cout << result;
            break;

        case '*':
            result = num1 * num2;
            std::cout << result;
            break;

        case '/':
            result = num1 / num2;
            std::cout << result;
            break;
        
        default:
            std::cout << "MIRCHI 🌶️ KHA LE BHAI";
            break;
    }

    return 0;
}