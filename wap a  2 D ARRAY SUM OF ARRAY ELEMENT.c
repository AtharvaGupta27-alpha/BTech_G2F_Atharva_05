#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;
    int sum = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

   
    printf("Enter the elements of the array:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }

    printf("The sum of all elements in the array is: %d\n", sum);

    return 0;
}