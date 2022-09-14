#include <stdio.h>

void increment(int input){
		printf("Inside Increment Input value: %d \n", input);
		printf("Address of Input: %d \n", &input);
		input = input + 1;
		printf("Inside Increment Input value after increment: %d \n", input);
		
}

int main(int argc, char **argv)
{
	int compteur = 0;
	compteur = compteur + 1;
	printf("Compteur before calling Increment %d\n", compteur);
	increment(compteur);
	printf("Compteur after  calling Increment %d\n", compteur);
	printf("Address of Compteur: %d\n", &compteur);
	return 0;
}
