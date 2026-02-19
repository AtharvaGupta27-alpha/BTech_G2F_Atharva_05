#include <stdio.h>

int main(){
    printf("please enter the number:- ");
    int n;
    scanf("%d",&n);
    int s = 0;
    for(int i = 1 ; i <= 10 ; i++){
        s = s + n;
        printf("%d x %d = %d\n",n,i,s);
    }
    return 0;
}