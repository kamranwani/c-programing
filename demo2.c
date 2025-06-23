#include <stdio.h>

int main() {
    int a, b, temp;

    // Input
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap logic
    temp = a;
    a = b;
    b = temp;

    // After swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
