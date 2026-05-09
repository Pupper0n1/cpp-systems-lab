#include <iostream>

int main() {
  // while we have std::endl; sometime's it's inefficient as that also flushes
  // the buffer and when we have multiple print statements it can be unecessary.
  // In those cases it is better to just use '\n as shown below.

  int x{5};
  std::cout << "x is equal to" << x << '\n';
  std::cout << "Yes it is." << "\n";
  std::cout << "And that's all folks!\n";
}

// Bonus note: \n can be used with single AND double quotes.
