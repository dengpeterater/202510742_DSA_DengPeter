#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;   // base case
    return n * factorial(n - 1); // recursive case
}

int main() {
    printf("Factorial = %d\n", factorial(5));
    return 0;
}
