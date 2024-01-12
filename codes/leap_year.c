#include<stdio.h>
int main() {
    int a;
    printf("enter year : \n");
    scanf("%d",&a);
    if(a%4==0){
        printf("this is a leap year");
    }
    else{
        printf("This is not leap year");
    }
    return 0;
}