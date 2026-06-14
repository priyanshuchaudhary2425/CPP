#include <iostream>
#include <cmath>

int main() {

    double a;
    double b;
    double c;

    std::cout << "What is the value of a? ";
    std::cin >> a;

    std::cout << "What is the value of b? ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "Hypotenius value is: " << c << '\n';

    return 0;
}