#include <iostream>

// typedef std::string text_t;
// typedef int int_i;
using text_t = std::string;
using int_i = int;

int main() {
    text_t fname = "Priyanshu";
    int_i age = 20;
    
    std::cout << fname << " " << age << '\n';

    return 0;
}