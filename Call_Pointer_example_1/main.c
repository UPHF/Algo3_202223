#include <stdio.h>

void incrementP(int * input){
	printf("\nInside Increment Value of Input %d\n", input);
	*input = *input + 1;
	printf("\nInside Increment Value of *Input %d\n", *input);
	
}

int main(int argc, char **argv)
{
	int compteur = 1;
	printf("Address of Compteur %d\n",&compteur);
	printf("Value of Compteur %d\n", compteur);
	
	incrementP(&compteur);
	printf("After increment \n");
	printf("Value of Compteur %d\n", compteur);
	
}
