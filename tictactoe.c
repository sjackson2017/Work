/*Sean Jackson*/
#include <stdio.h>
int main(void) {
	int winner = 0;
	int number = 0;
	int letter[9];
	int pepe;
	int meme;
	int bruh;
	int i;
	int j;
	int k;
	for (i=0;i<9;i++)
		letter[i] = ' ';
	/*Prints out the Tic-Tac-Toe Board in the while statement*/
	while (number < 9) {
		bruh = 0;
		printf("Pick 1,2,3,4,5,6,7,8, or 9\n");
		printf(" %c | %c  | %c \n", letter[0], letter[1], letter[2]);
		printf("___|____|___ \n");
		printf(" %c | %c  | %c \n", letter[3], letter[4], letter[5]);
		printf("___|____|___ \n");
		printf(" %c | %c  | %c \n", letter[6], letter[7], letter[8]);
		printf("   |    |    \n");
	if (number % 2 == 0) {
		pepe = 'X';
	meme = 1;
	} else {
		pepe = 'O';
	meme = 2;
	}
	printf("Select a number: %d", meme);
		scanf("%d", &j);
	if (j < 1||j >9) {
		printf("Pick 1,2,3,4,5,6,7,8, or 9, if it is still available  \n");
	}
	if (letter[j-1]=='X'||letter[j-1]=='O'){
		printf("Sorry, Can't go there\n");
	}
	letter[j-1]=pepe;
	number++;
	
	for (i=0;i<9;i++){
		if (i%3==0)
			bruh = 0;
	
	if (letter[i]==pepe){
		bruh++;
	
	if (bruh==3){
		winner=1;
	return 0;
	}
}
}

	bruh = 0;
	for (i=0;i<3;i++){
	for (k=i;k<=i+6;k=k+3){
		if (letter[k]==pepe)
	bruh++;
	}
	if (bruh==3) {
	winner=1;
	return 0;
	}
	bruh = 0;
	
	if ((letter[0] == pepe && letter[4] == pepe && letter[8] == pepe) ||
	(letter[2] == pepe && letter[4] == pepe && letter[6] == pepe)) {
	winner = 1;
	return 0;
}

