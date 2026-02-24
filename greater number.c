#include <stdio.h>
#include <math.h>
 int main()
 {
    float a, b,c;
    printf("enter 1st number:");
    printf("enter 2nd number:");
    printf("enter 3rd number:");
    scanf("%f%f%f",&a,&b,&c);
    if (a>=b && b>=c){
        printf("1st number is greater %f",a);
    } else if (b>=c && b>=a){
        printf("2nd number is greater %f",b);
    }else {
        printf("3rd number is greater %f",c);
    }
 }