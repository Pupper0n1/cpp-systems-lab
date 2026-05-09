#include <iostream>

int main() {
  double pi{3.14159};
  double gravity{9.8};
  double phi{1.61803};

  std::cout << pi << std::endl;
  std::cout << phi << std::endl;

  // Compiler WILL complain about gravity being unused

  return 0;
}

int foo() {
  [[maybe_unused]] double pi{3.14159};
  [[maybe_unused]] double gravity{9.8};
  [[maybe_unused]] double phi{1.61803};

  std::cout << pi << std::endl;
  std::cout << phi << std::endl;

  // Compiler won't complain about gravity

  return 0;
}
