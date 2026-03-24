#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    i = 0;
    j = len - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}