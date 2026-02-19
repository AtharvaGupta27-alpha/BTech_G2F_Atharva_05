#include <stdio.h>

int main(){
    int n;
    printf("please enter the number: ");
    scanf("%d",&n);
    int cnt = 0;
    for(int i = 2 ; i < n ; i++){
        if(n % i == 0){
            cnt++;
            break;
        }
    }
    if(cnt == 0) printf("The number is prime");
    else printf("the number is not prime");
    return 0;
}