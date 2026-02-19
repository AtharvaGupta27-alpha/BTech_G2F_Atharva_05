#include <stdio.h>

int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int s = 0;
    int temp = n;
    while(temp != 0){
        s += temp%10;
        temp = temp/10;
    }
    printf("the sum of the digits is %d",s);
    return 0;
}