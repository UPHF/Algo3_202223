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
	printf("Step 3) Address Max %d \n", &max);
	
	int * p;
	p = &max;
	printf("\nStep 4) p = &max; \n");
	printf("Step 4) Value P %d\n ", p);
	printf("Step 4) Address P %d\n ", &p);
	printf("Step 4) Value *P %d\n ", *p);
	
	
	p = &compteur;
	printf("\nStep 5) p = &compteur; \n");
	printf("Step 5) Value P %d\n ", p);
	printf("Step 5) Address P %d\n ", &p);
	printf("Step 5) Value *P %d\n ", *p);
	
	printf("\nStep 6) Increment Compteur using P \n");
	printf("Step 6) Before Increment Compteur %d\n ", compteur);
	(*p) = (*p) + 1;
	printf("Step 6) After Increment Compteur %d\n ", compteur);
	
	
	
}
