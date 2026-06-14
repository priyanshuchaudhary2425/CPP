#include <iostream>

int main() {

    int day;

    std::cout << "Please enter weekday...";
    std::cin >> day;

    switch(day) {
        case 1:
            std::cout << "Monday";
            break;
        case 2:
            std::cout << "Tuesday";
            break;
        case 3:
            std::cout << "Wednesday";
            break;
        case 4:
            std::cout << "Thursday";
            break;
        case 5:
            std::cout << "Friday";
            break;
        case 6:
            std::cout << "Saturday";
            break;
        case 7:
            std::cout << "Sunday";
            break;
        default:
            std::cout << "Please enter from 1 to 7 only";
            break;
    }

    return 9;
}