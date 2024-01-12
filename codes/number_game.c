#include<stdio.h>
int main() {
	int number,guess,attempt=1;
	srand(time(0));
	number = rand()%100+1;
	
	do{
		printf("Guess the Number between 0 to 100 : ");
		scanf("%d",&guess);
		if(guess>number){
			printf("Guess a lesser number \n");}
		else if(guess<number){
			printf("guess a greater number \n");}
		else{
			printf("WINNER \nYou guessed it right ");}
	}
	while(guess!=number);
	return 0;
}
