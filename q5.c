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
    printf("The reverse of the number is %d",sum);
    return 0;
}