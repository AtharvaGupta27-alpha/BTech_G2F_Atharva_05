#include <stdio.h>

int power(int num , int p){
    int pro = 1;
    for(int i = 1 ; i<= p ; i++){
        pro *= num;
    }
    return pro;
}

int main(){
    int n , p;
    printf("Enter the number and the power:- ");
    scanf("%d %d",&n,&p);
    printf("The power of the given number is %d\n",power(n,p));
}