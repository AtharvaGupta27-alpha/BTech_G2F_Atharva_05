#include <stdio.h>

int main() {
    int num, temp, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;  // store original number

    if(num == 0) {
        count = 1;  // special case: 0 has 1 digit
    } else {
        if(num < 0) {
            temp = -num; // make it positive for negative numbers
        }
        while(temp != 0) {
            temp = temp / 10;  // remove last digit
            count++;            // increment count
        }
    }

    printf("Number of digits in %d is %d\n", num, count);

    return 0;
}
