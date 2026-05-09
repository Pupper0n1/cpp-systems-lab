#include <iostream>

int main() {
  // Using copy-initialization, compiler will warn but not error when we assign
  // a float to an int
  int a = 4.5;
  std::cout << "a is " << a << std::endl;

  // Same applies with direct-initialization
  int b(4.5);
  std::cout << "b is " << b << std::endl;

  // Using list-initialization, compiler will error as list-init does not allow
  // narrowing conversion int b { 4.5 };

  return 0;
}

/* Extra Note:
 * It's also called uniform initialization. It's supposed to be a single way to
 * initialize everything. It also avoids implicit conversions, which can help
 * avoid bugs. Also, explicitly calling {} will avoid uninitialized values,
 * which can cause undefined behavior. This also avoids something called "the
 * most vexing parse." This issue causes the compiler to think you are calling a
 * function instead of initializing a value. In summary, it avoids a lot of
 * issues and provides a uniform syntax for initialization
 */
