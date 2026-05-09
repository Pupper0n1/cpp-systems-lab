#include <iostream>

int main() {
    int a = 5, b = 6;          // copy-initialization
    int c ( 7 ), d ( 8 );      // direct-initialization
    int e { 9 }, f { 10 };     // direct-list-initialization
    int i {}, j {};            // value-initialization


    int x, y = 5;       // wrong: x is not initialized to 5. x will be unintialized.
    int p = 5, q = 5;   // correct!
}
