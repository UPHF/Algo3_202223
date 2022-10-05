#include <stdio.h>
#define  N 4

int sumIterative(int myTab[], int size){
	int i=0;
	int result = 0;
	while(i<size){
		result += myTab[i];
		i++;
	}
	return result;
}

int sumRecursive(int myTab[], int i, int size){
	
	if (i== size -1){
		return myTab[i];
	}
	else{
		return  myTab[i] + sumRecursive(myTab, i+1, size );
	}
}

int main(int argc, char **argv)
{
	printf("Exo CM 5 Recursive\n");
	
	int myTab[] = {2, 3, 1, 4};
	
	int resSum = sumRecursive(myTab, 0, N);
	printf("Result sum %d \n", resSum);
	return 0;
}
