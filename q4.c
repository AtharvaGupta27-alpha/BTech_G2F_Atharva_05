#include <stdio.h>

int main(){
    int n;
    printf("please enter the number: ");
    scanf("%d",&n);
    if(n == 1){
        printf("0\n");
        return 0;
    }
    int a = 0 , b = 1;
    printf("%d %d",a,b);
    int c = a + b;
    for(int i = 2 ; i< n ; i++){
        c = a + b;
        printf(" %d",c);
        a = b;
        b = c;
    }
    return 0;
}