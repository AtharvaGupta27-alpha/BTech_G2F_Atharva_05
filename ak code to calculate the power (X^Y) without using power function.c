#include <stdio.h>

int main() {
    int base, exponent, i;
    long long result = 1;  // use long long for larger results

    printf("Enter the base (X): ");
    scanf("%d", &base);

    printf("Enter the exponent (Y): ");
    scanf("%d", &exponent);

    // Handling positive exponents
    for(i = 1; i <= exponent; i++) {
        result *= base;
    }

    printf("%d^%d = %lld\n", base, exponent, result);

    return 0;
}