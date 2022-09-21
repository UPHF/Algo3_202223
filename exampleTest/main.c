#include <stdio.h>

int mustDrinkBeer(int age){
	if (age >= 18)
		return 1; //True
	else
	    return 0; //False

	}

int main(int argc, char **argv)
{
	int age_eric = 18;
	int must = mustDrinkBeer(age_eric);
	printf("Eric with %d y0 can drink? %d\n",age_eric, must );
	
	age_eric = 21;
	must = mustDrinkBeer(age_eric);
	printf("Eric with %d y0 can drink? %d\n",age_eric, must );
	
	age_eric = 17;
	must = mustDrinkBeer(age_eric);
	printf("Eric with %d y0 can drink? %d\n",age_eric, must );
	
	age_eric = 19;
	must = mustDrinkBeer(age_eric);
	printf("Eric with %d y0 can drink? %d\n",age_eric, must );
	
	
	return 0;
}
