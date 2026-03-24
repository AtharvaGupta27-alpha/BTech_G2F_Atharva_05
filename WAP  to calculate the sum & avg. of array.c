#include <stdio.h>

void calculate_sum_and_avg(int arr[], int n) {
    int sum = 0;
    float avg;

    // Calculate sum of elements in the array
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Calculate average
    avg = (float)sum / n;

    // Print the results
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);
}

int main() {
    int n;

    // Ask user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  // Declare array with user-defined size

    // Take input for array elements
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // Call function to calculate sum and average
    calculate_sum_and_avg(arr, n);

    return 0;
}