#include <iostream>

int main() {

    int row, col;
    char symbol;

    std::cout << "#-------R E C T A N G L E-----------#" << '\n';
    
    std::cout << "Please enter number of rows: ";
    std::cin >> row;

    std::cout << "Please enter number of cols: ";
    std::cin >> col;

    std::cout << "Please enter symbol: ";
    std::cin >> symbol;

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            std::cout << symbol << '\t';
        }

        std::cout << '\n';
        }


    return 0;
}