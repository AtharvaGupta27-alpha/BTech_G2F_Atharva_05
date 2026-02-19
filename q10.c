#include <stdio.h>

int main(){
    float a  , b;
    char o;
    printf("please enter the number then operator and then again the number");
    scanf("%f %c %f",&a,&o,&b);
    float c;
    if(o == '+'){
        printf("the result is %f",a+b);
    }
    else if(o == '-'){
        printf("the result is %f",a-b);
    }
    else if(o == '*'){
        printf("the result is %f",a*b);
    }
    else if(o == '/'){
        printf("the result is %f",a/b);
    }
    else printf("enter valid input");
    return 0;
}