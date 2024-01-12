#include<stdio.h>
int main() {
    int age;
    printf("enter your age :");
    scanf("%d",&age);
    if(age<18){
        printf("you are not eligible for voting");}
    else{
        printf("you are eligible for voating");}
    return 0;
}