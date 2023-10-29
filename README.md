# abhi-recursion.cpp

Recursion in C++ is a programming technique where a function calls itself in order to solve a problem. This allows you to break down a complex problem into smaller,
more manageable subproblems. Each recursive call works on a smaller instance of the problem until a base case is reached, at which point the recursion terminates and
the results are combined to solve the original problem.

Here's a simple example of a recursive function in C++ to calculate the factorial of a number:

```cpp
#include <iostream>

int factorial(int n) {
    // Base case: if n is 0 or 1, the factorial is 1.
    if (n <= 1) {
        return 1;
    }
    // Recursive case: calculate factorial by calling the function with a smaller value.
    return n * factorial(n - 1);
}

int main() {
    int number = 5;
    int result = factorial(number);
    std::cout << "Factorial of " << number << " is " << result << std::endl;
    return 0;
}
```

In this example, the `factorial` function calls itself with a smaller value (`n - 1`) until it reaches the base case where `n` is 0 or 1. The results are then combined to calculate the factorial of the original number.

Recursion is a powerful technique, but it should be used with care. It's important to ensure that your recursive function has a terminating condition (base case) to prevent infinite recursion. Recursive solutions can also have performance implications due to the overhead of function calls, so in some cases, iterative solutions may be more efficient.
