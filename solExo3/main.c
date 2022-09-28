#include <stdio.h>
#define N 4

int findMin(int tab[N]){
	printf("Search for min\n");
	int min = tab[0];
	for(int i = 0; i< N;i++){
		printf("i: %d\n", i);
		if (tab[i] < min){
			min = tab[i];
		}
	}
	return min;
}


void findMinPointer(int tab[N], int *pMin){
	printf("Search for min\n");
	int min = tab[0];
	for(int i = 0; i< N;i++){
		printf("i: %d\n", i);
		if (tab[i] < min){
			min = tab[i];
		}
	}
	*pMin = min;
}
int findMax(){

}

void findMinMax(int tab[N], int *pMin,  int *pMax){
	printf("Search for min\n");
	int min = tab[0];
	int max = tab[0];
	for(int i = 0; i< N;i++){
		printf("i: %d\n", i);
		if (tab[i] < min){
			min = tab[i];
		}
		
		if (tab[i] > max){
			max = tab[i];
		}
	}
	*pMin = min;
	*pMax = max;
}

int main(int argc, char **argv)
{
	printf("Solution exo 3\n");
	int myTab[] = {2, 3, 1, 4};
	
	int resultMin;
	
	findMinPointer(myTab, &resultMin);
	//printf("Min: %d\n", resultMin);
	
	int resultMax;
	findMinMax(myTab, &resultMin, &resultMax);
	printf("Min: %d\n", resultMin);
	printf("Max: %d\n", resultMax);
	
	
	
	return 0;
}
