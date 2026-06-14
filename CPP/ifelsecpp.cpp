#include <iostream>

int main() {

    int age;

    std::cout << "What is your age? ";
    std::cin >> age;

    
    if (age >= 18) {
        std::cout << "You can vote!!!";
    }

    else if (age >= 60) {
        std::cout << "This country policy doesn't allow you to vote.";
    }

    else if (age <=0 ) {
        std::cout << "Seriously dude??? you wanna trick us???";
    }

    else {
        std::cout << "You are not old enough to vote!!";
    }

    return 0;
}