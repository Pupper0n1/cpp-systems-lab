int main() {
  // Default initialization
  // 'a' is uninitialized and holds an indeterminate value (aka. "Garbage
  // value").
  int a;

  // Copy initialization
  // Initializes 'b' with 42. For ints, identical to direct initialization.
  int b = 42;

  // Direct initialization
  // Another way to initialize with 42. No efficiency difference for ints.
  int c(42);

  // Direct list initialization (recommended for most cases)
  // Prevents narrowing and works uniformly across types.
  int d{42};

  // Copy list initialization
  // Also prevents narrowing; rarely used in practice.
  int e = {42};

  // Extra note:
  // List initialization is informally called "uniform initialization" because
  // its meaning and behavior is intended to be the same regardless of how you
  // invoke it... Though what's intended doesn't always happen
}
