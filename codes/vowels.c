#include<stdio.h>
void main(){
    char ch;
    printf("enter alphabet : \n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("alphabet is vowel");
    }
    else{
        printf("alphabet is not vowel");
    }
}