#include <stdio.h>

int main(){
    printf("Enter the character");
    char c;
    scanf("%c",&c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        printf("The character is a vowel");
    }
    else printf("The character is not a vowel");
    return 0;
}