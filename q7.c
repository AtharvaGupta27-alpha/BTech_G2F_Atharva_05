#include <stdio.h>

int power(int num , int p){
    int pro = 1;
    for(int i = 1 ; i<= p ; i++){
        pro *= num;
    }
    return pro;
}

int main(){
    int n;
    printf("please enter the number:- ");
    scanf("%d",&n);
    int cnt = 0;
    int temp = n;
    while(temp != 0){
        cnt++;
        temp = temp/10;
    }
    temp = n;
    int sum = 0;
    while(temp != 0){
        sum = sum + power(temp%10 , cnt);
        temp = temp/10;
    }
    if(sum == n) printf("The number is armstrong\n");
    else printf("The number is not armstrong\n");
    return 0;
}