#include<stdio.h>
int main() {
    char variable;
    float a,b;
    printf("enter the variable \n");
    scanf("%c",&variable);
    printf("enter value of a and b \n");
    scanf("%f %f",&a,&b);
    switch(variable) {
        case '+' :
        printf("sum = %f",a+b);
        break;
        case '-' :
        printf("difference = %f",a-b);
        break;
        case '*' :
        printf("product = %f",a*b);
        break;
        case '/' :
        printf("divide = %f",a/b);
        break;
    }
    return 0;
}