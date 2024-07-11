#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int v = 1; v <= n; v++) {
        fact = fact * v;
    }
    return fact;
}

int main() {
    int number;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate factorial and print the result
    int result = factorial(number);
    printf("Factorial of %d is %d\n", number, result);

    return 0;
}
