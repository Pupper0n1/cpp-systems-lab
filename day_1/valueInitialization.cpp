#include <iostream>

int main() {
    // When a variable is initialized using an empty set of braces, a special form of list-initialization called value-initialization takes place.
    // In most cases, value-initialization will implicitly initialize the variable to zero (or whatever value is closest to zero for a given type).
    // In cases where zeroing occurs, this is called zero-initialization.
    int a {};

    std::cout << a << std::endl;

    return 0;
}


int foo() {
    int x { 0 };    // direct-list-initialization with initial value 0
    int y {};       // value initialization

    return 0;
};
