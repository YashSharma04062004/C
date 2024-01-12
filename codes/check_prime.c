#include<stdio.h>
int percentage(int a,int b,int c);
int main(){
	int a,b,c;
	printf("Enter Marks of three subjects : ");
	scanf("%d %d %d",&a,&b,&c);
	percentage(a,b,c);
	return 0;
}
int percentage(int a,int b,int c){
	int d,e;
	d=a+b+c;
	e=d/300*100;
	printf("percentage is %d",e);
	return e;
}
