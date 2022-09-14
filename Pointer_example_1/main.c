#include <stdio.h>

int main(int argc, char **argv)
{
	int compteur = 0;
	printf("Step 1) Compteur %d\n ", compteur);
	printf("Step 1) Address Compteur %d \n", &compteur);
	
	compteur = compteur + 10;
	
	printf("Step 2) Compteur %d\n ", compteur);
	printf("Step 2) Address Compteur %d \n", &compteur);
	
	int max = 1000;
	printf("Step 3) Max %d\n ", max);
	printf("Step 2) Address Max %d \n", &max);
	
}
