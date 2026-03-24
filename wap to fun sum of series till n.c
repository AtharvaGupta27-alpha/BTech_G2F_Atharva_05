#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += 1.0 / i;  // Add the reciprocal of i
    }

    printf("The sum of the series is: %.6lf\n", sum);

    return 0;
}