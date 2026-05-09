#include <iostream>

// std::cin uses a buffer (similar to std::cout). If the user inputs "4 5", it
// will store 4 into x and 5 into y because "4 5\n" goes into the input buffer,
// but only the 4 gets extracted to variable x. Later when we encounter std::cin
// >> y, the program will notice that 5 is still in the input buffer and extract
// that into y without waiting for the user to enter additional input.

int main() {
  std::cout << "Enter two numbers: ";

  int x{};
  std::cin >> x;

  int y{};
  std::cin >> y;

  std::cout << "You have entered: " << x << " and " << y << "\n";

  return 0;
}

// Bonus note:
// if we use "a 42" as input, then we will get "0 0" as output because
// extraction will have failed but the character stays in the buffer and all
// future extractions will fail until the input stream is cleared.
