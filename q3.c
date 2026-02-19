#include <stdio.h>

int main(){
    int n;
    printf("please enter the number: ");
    scanf("%d",&n);
    int sum = n * (n + 1)/2;
    printf("the sum of n natural number is %d\n",sum);
    return 0;
}