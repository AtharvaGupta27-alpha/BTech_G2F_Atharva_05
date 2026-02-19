#include <stdio.h>

int main(){
    printf("Enter the marks of the five subjects");
    float a , b , c , d , e;
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    float s = (a + b + c+ d + e)/5;
    printf("the percentage is %f",s);
    return 0;
}