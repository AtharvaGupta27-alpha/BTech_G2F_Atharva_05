#include <stdio.h>

int main(){
    int n;
    printf("please enter the number: ");
    scanf("%d",&n);
    int temp = n;
    int rem , sum = 0;
    while(n != 0){
        rem = n%10;
        sum = sum*10 + rem;
        n = n/10;
    }
    if(sum == temp) printf("the number is pallindrome\n");
    else printf("the nummber is not pallindrome");
    return 0;
}