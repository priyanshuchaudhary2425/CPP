#include <iostream>

int main() {

    // && 
    // || 
    // !

    int temp;
    int sunny = false;

    std::cout << "What is temperature today in celsius? ";
    std::cin >> temp;

    if(temp > 0 && temp < 30) {
        std::cout << "Weather is good!";
    } else {
        std::cout << "The temperature is bad";
    }

    if(!sunny) {
        std::cout << "It is not sunny!";
    } else {
        std::cout << "It is sunnt";
    }

    return 0;
}