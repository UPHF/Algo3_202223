#include <stdio.h>
#define N 4

int main(int argc, char **argv)
{
	printf("Cm3\n");
	
	int oneVar = 10;
	
	int myTab[N];
	
	printf("My Tab Init adress  %d \n", myTab );
	printf("My Tab Init adress hexa %p \n", myTab );
	
	for (int i= 0; i<N;i++ ){
		myTab[i] = oneVar + i;
	}
	
	for (int i= 0; i<N;i++ ){
		printf("pos %d: %d adr: %d \n", i, myTab[i], &myTab[i]);
	}
	
	return 0;
}
