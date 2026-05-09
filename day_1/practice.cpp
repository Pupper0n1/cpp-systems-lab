#include <iostream>

int main() {
    std::cout << "Enter an integer: ";

    int userInput {};

    std::cin >> userInput;

    std::cout << "Double that number is: " << 2 * userInput << std::endl;

    return 0;
}
