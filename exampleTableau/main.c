#include <stdio.h>
#define N 4

int main(int argc, char **argv)
{
	printf("Cm3\n");
	
	int oneVar = 10;
	
	int myTab[N];
	
	printf("My Tab Init adress  %d \n", myTab );
	printf("My Tab Init adress hexa %p \n", myTab );
	
	int * pointer;
	
	pointer = &(myTab[0]);
	//	Equivalent: pointer = myTab;
	printf("\nPointer to address: %d\n", pointer);
	for (int i= 0; i<N;i++ ){
		myTab[i] = oneVar + i;
	}
	printf("\nNavigation of array: \n") ;
	for (int i= 0; i<N;i++ ){
		printf("pos %d: %d adr: %d \n", i, myTab[i], &myTab[i]);
		printf("Pointer to address: %d\n", pointer);
		printf("Value with pointer %d \n", *pointer);
		
		pointer = pointer + 1;
		
	}
	
	return 0;
}
