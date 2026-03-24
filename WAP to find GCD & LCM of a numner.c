#include <stdio.h>

// Function to find GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find LCM
int lcm(int a, int b, int gcd_value) {
    return (a * b) / gcd_value;
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate GCD
    int gcd_value = gcd(num1, num2);

    // Calculate LCM
    int lcm_value = lcm(num1, num2, gcd_value);

    // Output results
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd_value);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm_value);

    return 0;
}