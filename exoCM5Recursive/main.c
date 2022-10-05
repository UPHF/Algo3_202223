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
	printf("In step i=%d \n", i);
	if (i== size -1){
		printf("In Stop condition\n");
		return myTab[i];
	}
	else{
		printf("Call recursive: i=%d: \n", i);
		int resultRecursiveCall = sumRecursive(myTab, i+1, size );
		int partialResult =   myTab[i] + resultRecursiveCall;
		
		printf("Coming Back step i=%d: t[i] + sumRecursive(%d, %d)  = %d \n", i,i,N-1, partialResult );
		return partialResult;
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
