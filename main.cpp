#include <stdio.h>

float addFour(float a, float b, float c, float d) {
    return a + b + c + d;
}

int main() {
    float result = addFour(1.2, 2.3, 3.4, 4.5);
    printf("Sum = %.2f\n", result);
    return 0;
}
